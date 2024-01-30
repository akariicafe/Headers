@class SBFAlwaysOnLiveRenderingAssertionWeakCollection;
@protocol BLSBacklightStateObservable, SBFAlwaysOnLiveRenderingBLSAssertionProvider;

@interface SBFAlwaysOnLiveRenderingAssertionProvider : NSObject {
    SBFAlwaysOnLiveRenderingAssertionWeakCollection *_assertions;
}

@property (retain, nonatomic) id<BLSBacklightStateObservable> backlight;
@property (retain, nonatomic) id<SBFAlwaysOnLiveRenderingBLSAssertionProvider> assertionProvider;

+ (id)sharedInstance;

- (id)init;
- (id)description;
- (void)invalidateAllAssertions;
- (void).cxx_destruct;
- (id)_acquireLiveRenderingAssertionForScene:(id)a0 identifier:(id)a1 reason:(id)a2 attributes:(id)a3;
- (id)_assertionManagerForScene:(id)a0;
- (void)_setAssertionManager:(id)a0 forScene:(id)a1;
- (id)acquireLiveRenderingAssertionForFBSScene:(id)a0 reason:(id)a1;
- (id)acquireLiveRenderingAssertionForUIScene:(id)a0 reason:(id)a1;

@end
