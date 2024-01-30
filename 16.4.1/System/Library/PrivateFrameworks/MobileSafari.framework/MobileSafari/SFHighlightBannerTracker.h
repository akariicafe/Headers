@class NSObject, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface SFHighlightBannerTracker : NSObject {
    NSMutableDictionary *_blockedHighlights;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (class, readonly, nonatomic) SFHighlightBannerTracker *sharedTracker;

- (void)load;
- (id)init;
- (void)clear;
- (void).cxx_destruct;
- (void)_saveOnInteralQueue;
- (void)blockBannerForHighlight:(id)a0;
- (void)isBannerBlockedForHighlight:(id)a0 completion:(id /* block */)a1;
- (void)unblockBannerForHighlight:(id)a0;

@end
