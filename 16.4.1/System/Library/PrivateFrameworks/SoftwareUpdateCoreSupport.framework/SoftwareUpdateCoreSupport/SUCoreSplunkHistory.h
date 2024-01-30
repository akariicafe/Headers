@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SUCoreSplunkHistory : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *splunkHistoryQueue;
@property (retain, nonatomic) NSString *lastUUID;
@property int lockFD;

+ (id)sharedHistory;
+ (void)logEventUUID:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)acquireSharedLock;
- (void)releaseSharedLock;
- (void)safeWriteEventUUID:(id)a0;
- (int)setupLogFile;

@end
