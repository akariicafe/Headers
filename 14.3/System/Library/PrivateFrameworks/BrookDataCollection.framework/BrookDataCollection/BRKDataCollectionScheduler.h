@class NSBackgroundActivityScheduler;

@interface BRKDataCollectionScheduler : NSObject {
    NSBackgroundActivityScheduler *_scheduler;
}

- (id)init;
- (void).cxx_destruct;
- (void)schedule:(id /* block */)a0;

@end
