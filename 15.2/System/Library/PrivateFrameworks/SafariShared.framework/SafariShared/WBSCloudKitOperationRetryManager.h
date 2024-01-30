@class NSDate;

@interface WBSCloudKitOperationRetryManager : NSObject {
    NSDate *_dateRetryWasFirstRequested;
    unsigned long long _numberOfRetries;
}

@property (nonatomic) double timeout;

- (void).cxx_destruct;
- (id)init;
- (long long)scheduleRetryIfNeededForError:(id)a0 usingBlock:(id /* block */)a1;

@end
