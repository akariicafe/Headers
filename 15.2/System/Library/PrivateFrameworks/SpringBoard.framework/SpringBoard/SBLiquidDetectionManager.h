@interface SBLiquidDetectionManager : NSObject {
    int _wetToken;
    BOOL _finishedInit;
}

@property (readonly, nonatomic, getter=isAccessoryPortWet) BOOL accessoryPortWet;
@property (readonly, nonatomic, getter=isDetectionEnabled) BOOL detectionEnabled;
@property (readonly, nonatomic, getter=isLiquidDetected) BOOL liquidDetected;

+ (id)sharedInstance;
+ (BOOL)showStatusBarIcon;

- (void)_updateWetState;
- (BOOL)_showStatusBarIcon;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_updateStatusBar;
- (id)succinctDescription;
- (id)description;
- (void)_finishInit;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)_stateDidUpdate;
- (void)dealloc;

@end
