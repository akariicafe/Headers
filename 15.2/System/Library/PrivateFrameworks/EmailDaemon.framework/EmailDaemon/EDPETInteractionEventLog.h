@class NSData, NSString, NSURL, NSFileHandle, EFLazyCache, CNContactStore, NSObject, EFMutableInt64Set, SGMailIntelligenceStringHasher, NSNumber;
@protocol OS_os_log, EMUserProfileProvider, EMVIPManager, OS_dispatch_queue;

@interface EDPETInteractionEventLog : NSObject <EFLoggable, EDPBHasher, EDInteractionEventLog> {
    SGMailIntelligenceStringHasher *_stringHasher;
    long long _userID;
    long long _deviceID;
    NSNumber *_persistentBits;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) id<EMUserProfileProvider> profileProvider;
@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) id<EMVIPManager> vipManager;
@property (readonly, nonatomic) EFLazyCache *contactIDCache;
@property (retain, nonatomic) NSString *meContactIdentifier;
@property (retain, nonatomic) NSData *rotatingSalt;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) _Atomic unsigned int sequenceNumber;
@property (readonly, nonatomic) NSURL *directory;
@property (retain, nonatomic) NSURL *currentLogFile;
@property (retain, nonatomic) NSFileHandle *logFileHandle;
@property (nonatomic) _Atomic BOOL shouldLog;
@property (retain, nonatomic) EFMutableInt64Set *currentLogMessageIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)enumerateFramesInData:(id)a0 block:(id /* block */)a1;

- (BOOL)_openCurrentLogfile;
- (id)persistentBits;
- (id)_scanForMessageIDs:(id)a0 logVersion:(out long long *)a1;
- (void)_writeEvent:(id)a0;
- (struct { long long *x0; unsigned long long x1; unsigned long long x2; })hashedSubject:(id)a0;
- (long long)userID;
- (unsigned long long)_truncatedUNIXTimestampFromDate:(id)a0;
- (void)_rotateLogWithCompressedData:(id)a0;
- (unsigned long long)_estimateStopCount:(id)a0;
- (void)persistEvent:(id)a0 date:(id)a1 conversationID:(long long)a2 data:(id)a3;
- (void)_writeMessageDataIfNecessary:(id)a0 account:(id)a1;
- (id)_buildLogFileURLInDir:(id)a0;
- (id)_framedMessage:(id)a0;
- (void)persistEvent:(id)a0 dataFromMessage:(id)a1;
- (void)persistEvent:(id)a0 date:(id)a1 message:(id)a2 data:(id)a3;
- (long long)hashedMailboxID:(id)a0;
- (long long)hashedContactIDForAddress:(id)a0;
- (id)initWithDirectory:(id)a0 userProfileProvider:(id)a1 contactStore:(id)a2 vipManager:(id)a3;
- (void)_writeMessageDataIfNecessary:(id)a0;
- (id)hashedMessageHeadersForMessage:(id)a0;
- (id)batchedEventsForSubmission;
- (void)_writeQuotaReachedEvent;
- (id)_currentLocaleIdentifier;
- (void)persistEvent:(id)a0 date:(id)a1 message:(id)a2 mailbox:(id)a3;
- (long long)hashedAccountID:(id)a0;
- (void)_compressFramedMessagesIntoBatch:(id)a0;
- (int)_openFileForAppending:(id)a0;
- (void)persistEvent:(id)a0 dataFromMessage:(id)a1 account:(id)a2;
- (void)waitForPendingWrites;
- (void).cxx_destruct;
- (long long)hashedConversationID:(long long)a0;
- (void)persistEvent:(id)a0 date:(id)a1 message:(id)a2 mailboxType:(long long)a3;
- (int)_eventNameFromString:(id)a0;
- (int)_timezoneOffset;
- (id)_eventForName:(int)a0 date:(id)a1;
- (long long)_truncatedSHA256:(id)a0;
- (void)_resetIdentifiers;
- (id)_messageDataEventForMessage:(id)a0 account:(id)a1;
- (long long)hashedString:(id)a0;
- (long long)deviceID;
- (BOOL)_isLogQuotaReached;
- (void)_writeHeader;

@end
