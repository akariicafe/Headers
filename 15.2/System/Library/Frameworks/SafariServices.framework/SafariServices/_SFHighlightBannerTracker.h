@class NSObject, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface _SFHighlightBannerTracker : NSObject {
    NSMutableDictionary *_blockedHighlights;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (class, readonly, nonatomic) _SFHighlightBannerTracker *sharedTracker;

- (void)clear;
- (void)_saveOnInteralQueue;
- (void)unblockBannerForHighlight:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)load;
- (void)isBannerBlockedForHighlight:(id)a0 completion:(id /* block */)a1;
- (void)blockBannerForHighlight:(id)a0;

@end
