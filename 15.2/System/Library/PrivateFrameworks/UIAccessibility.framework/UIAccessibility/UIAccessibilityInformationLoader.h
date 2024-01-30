@class NSTimer;

@interface UIAccessibilityInformationLoader : NSObject {
    NSTimer *_coalesceTimer;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (void)setNeedsLoadAccessibilityInformation;
- (void)_loadAccessibilityInformationOnMainThread:(BOOL)a0;
- (void)_setNeedsLoadAccessibilityInformationOnMainThread;
- (void)_coalesceTimerFired:(id)a0;
- (void)loadAccessibilityInformation;

@end
