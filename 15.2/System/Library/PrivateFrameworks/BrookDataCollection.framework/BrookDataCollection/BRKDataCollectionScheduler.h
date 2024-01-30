@class NSBackgroundActivityScheduler;

@interface BRKDataCollectionScheduler : NSObject {
    NSBackgroundActivityScheduler *_scheduler;
}

- (void).cxx_destruct;
- (id)init;
- (void)schedule:(id /* block */)a0;

@end
