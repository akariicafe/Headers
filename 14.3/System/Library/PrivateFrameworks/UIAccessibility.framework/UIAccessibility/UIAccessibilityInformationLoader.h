@class NSTimer;

@interface UIAccessibilityInformationLoader : NSObject {
    NSTimer *_coalesceTimer;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_coalesceTimerFired:(id)a0;
- (void)_loadAccessibilityInformationOnMainThread:(BOOL)a0;
- (void)_setNeedsLoadAccessibilityInformationOnMainThread;
- (void)loadAccessibilityInformation;
- (void)setNeedsLoadAccessibilityInformation;
- (id)_init;

@end
