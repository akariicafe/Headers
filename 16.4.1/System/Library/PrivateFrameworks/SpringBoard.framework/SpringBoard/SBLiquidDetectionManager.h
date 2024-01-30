@interface SBLiquidDetectionManager : NSObject {
    int _wetToken;
    BOOL _finishedInit;
}

@property (readonly, nonatomic, getter=isAccessoryPortWet) BOOL accessoryPortWet;
@property (readonly, nonatomic, getter=isDetectionEnabled) BOOL detectionEnabled;
@property (readonly, nonatomic, getter=isLiquidDetected) BOOL liquidDetected;

+ (id)sharedInstance;
+ (BOOL)showStatusBarIcon;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)_finishInit;
- (void)_updateWetState;
- (void)_updateStatusBar;
- (void)dealloc;
- (id)succinctDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)description;
- (void)_stateDidUpdate;
- (BOOL)_showStatusBarIcon;

@end
