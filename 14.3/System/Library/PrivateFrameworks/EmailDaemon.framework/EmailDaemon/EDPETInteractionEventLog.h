@class NSData, EDInteractionEventLogSaltProvider, NSString, NSURL, EFLazyCache, NSFileHandle, CNContactStore, NSObject, EFMutableInt64Set;
@protocol OS_os_log, EMUserProfileProvider, EMVIPManager, OS_dispatch_queue;

@interface EDPETInteractionEventLog : NSObject <EFLoggable, EDPBHasher, EDInteractionEventLog>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) id<EMUserProfileProvider> profileProvider;
@property (readonly, nonatomic) EDInteractionEventLogSaltProvider *saltProvider;
@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) id<EMVIPManager> vipManager;
@property (readonly, nonatomic) EFLazyCache *contactIDCache;
@property (retain, nonatomic) NSString *meContactIdentifier;
@property (readonly, nonatomic) long long userID;
@property (readonly, nonatomic) long long deviceID;
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

- (id)_salt;
- (void).cxx_destruct;
- (void)waitForPendingWrites;
- (id)initWithDirectory:(id)a0 userProfileProvider:(id)a1 saltProvider:(id)a2 contactStore:(id)a3 vipManager:(id)a4;
- (id)batchedEventsForSubmission;
- (void)persistEvent:(id)a0 date:(id)a1 message:(id)a2 data:(id)a3;
- (void)persistEvent:(id)a0 date:(id)a1 conversationID:(long long)a2 data:(id)a3;
- (void)persistEvent:(id)a0 dataFromMessage:(id)a1;
- (void)persistEvent:(id)a0 dataFromMessage:(id)a1 account:(id)a2;
- (void)persistEvent:(id)a0 date:(id)a1 message:(id)a2 mailbox:(id)a3;
- (void)persistEvent:(id)a0 date:(id)a1 message:(id)a2 mailboxType:(long long)a3;
- (long long)hashedAccountID:(id)a0;
- (id)hashedMessageHeadersForMessage:(id)a0;
- (long long)hashedConversationID:(long long)a0;
- (long long)hashedString:(id)a0;
- (long long)hashedMailboxID:(id)a0;
- (int)_timezoneOffset;
- (BOOL)_openCurrentLogfile;
- (void)_resetIdentifiers;
- (id)_buildLogFileURLInDir:(id)a0;
- (int)_openFileForAppending:(id)a0;
- (void)_writeHeader;
- (id)_scanForMessageIDs:(id)a0 logVersion:(out long long *)a1;
- (BOOL)_isLogQuotaReached;
- (id)_framedMessage:(id)a0;
- (void)_writeQuotaReachedEvent;
- (void)_writeMessageDataIfNecessary:(id)a0 account:(id)a1;
- (id)_messageDataEventForMessage:(id)a0 account:(id)a1;
- (id)_currentLocaleIdentifier;
- (unsigned int)_persistentBits;
- (unsigned long long)_truncatedUNIXTimestampFromDate:(id)a0;
- (unsigned long long)_estimateStopCount:(id)a0;
- (void)_compressFramedMessagesIntoBatch:(id)a0;
- (void)_rotateLogWithCompressedData:(id)a0;
- (long long)_truncatedSHA256:(id)a0;
- (long long)hashedContactIDForAddress:(id)a0;
- (struct { long long *x0; unsigned long long x1; unsigned long long x2; })hashedSubject:(id)a0;
- (int)_eventNameFromString:(id)a0;
- (id)_eventForName:(int)a0 date:(id)a1;
- (void)_writeMessageDataIfNecessary:(id)a0;
- (void)_writeEvent:(id)a0;

@end
