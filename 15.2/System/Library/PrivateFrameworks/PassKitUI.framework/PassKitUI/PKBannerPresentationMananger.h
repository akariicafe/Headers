@class NSString, NSMutableOrderedSet;

@interface PKBannerPresentationMananger : NSObject <PKBannerViewControllerDelegate> {
    NSMutableOrderedSet *_bannerModels;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _shouldWaitToDisplayBanner;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)_init;
- (void)bannerShouldBeDismissed:(id)a0;
- (void)_displayBanner:(id)a0 forDestination:(long long)a1;
- (void)displayBanner:(id)a0;

@end
