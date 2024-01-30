@class NSDate, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface WBSCloudKitOperationRetryManager : NSObject {
    NSDate *_dateRetryWasFirstRequested;
}

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (nonatomic) double timeout;
@property (readonly, nonatomic) unsigned long long numberOfRetries;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *scheduleQueue;

- (id)initWithLog:(id)a0;
- (long long)scheduleRetryIfNeededForError:(id)a0 usingBlock:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;

@end
