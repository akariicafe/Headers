@class NSArray, NSString, NSDate, NSObject, _SYSharedServiceDB;
@protocol OS_dispatch_queue;

@interface NMSWindowData : NSObject {
    NSString *_path;
    struct __CFString { } *_loggingFacility;
    NSObject<OS_dispatch_queue> *_syncQ;
    struct sqlite3 { } *_db;
    _SYSharedServiceDB *_sharedDB;
    struct sqlite3_stmt { } *_addMessageInFlight;
    struct sqlite3_stmt { } *_getMessageLength;
    struct sqlite3_stmt { } *_removeMessageInFlight;
    struct sqlite3_stmt { } *_getNextExpireDate;
    struct sqlite3_stmt { } *_getExpiredMessageIDs;
    struct sqlite3_stmt { } *_getBytesInFlight;
    struct sqlite3_stmt { } *_getCountInFlight;
    struct sqlite3_stmt { } *_pushPendingMessage;
    struct sqlite3_stmt { } *_getPendingMessage;
    struct sqlite3_stmt { } *_popPendingMessage;
    struct sqlite3_stmt { } *_countPendingMessages;
}

@property (readonly, nonatomic) NSArray *expiredMessageIDs;
@property (readonly, nonatomic) unsigned long long lengthOfAllMessagesInFlight;
@property (readonly, nonatomic) unsigned long long countOfAllMessagesInFlight;
@property (readonly, nonatomic) NSDate *dateOfNextMessageExpiry;
@property (readonly, nonatomic) unsigned long long countOfPendingMessages;

- (id)init;
- (void).cxx_destruct;
- (struct sqlite3 { } *)dbRef;
- (void)dealloc;
- (void)_prepareStatements;
- (int)_getSchemaVersion;
- (void)removeAllMessages;
- (BOOL)_openDBForceRecreate:(BOOL)a0;
- (void)_withDB:(id /* block */)a0;
- (id)initWithPath:(id)a0 logFacility:(struct __CFString { } *)a1;
- (void)_ensureSchema;
- (BOOL)_syncTransaction:(BOOL)a0 block:(id /* block */)a1;
- (id)initWithSharedDBForServiceName:(id)a0;
- (void)addMessageWithID:(id)a0 ofLength:(unsigned long long)a1 timeoutTime:(double)a2;
- (unsigned long long)removeAndReturnLengthOfMessageWithID:(id)a0;
- (unsigned long long)removeAndReturnLengthOfMessagesWithIDs:(id)a0;
- (void)pushPendingMessageData:(id)a0 timeToLive:(double)a1;
- (id)popPendingMessage;

@end
