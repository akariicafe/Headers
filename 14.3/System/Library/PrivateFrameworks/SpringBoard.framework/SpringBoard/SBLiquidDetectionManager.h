@interface SBLiquidDetectionManager : NSObject {
    int _wetToken;
    BOOL _finishedInit;
}

@property (readonly, nonatomic, getter=isAccessoryPortWet) BOOL accessoryPortWet;
@property (readonly, nonatomic, getter=isDetectionEnabled) BOOL detectionEnabled;
@property (readonly, nonatomic, getter=isLiquidDetected) BOOL liquidDetected;

+ (id)sharedInstance;
+ (BOOL)showStatusBarIcon;

- (void)_finishInit;
- (id)init;
- (void)_updateWetState;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (id)succinctDescription;
- (BOOL)_showStatusBarIcon;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)_stateDidUpdate;
- (id)description;
- (id)succinctDescriptionBuilder;
- (void)_updateStatusBar;

@end
