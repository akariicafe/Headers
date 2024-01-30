@class STKSessionBehavior;

@interface STKSIMToolkitAlertSession : STKAlertSession

@property (readonly, nonatomic) long long event;
@property (readonly, nonatomic) STKSessionBehavior *behavior;

- (void)remoteAlertHandleDidActivate:(id)a0;
- (void).cxx_destruct;
- (id)initWithLogger:(id)a0 responseProvider:(id)a1 event:(long long)a2 options:(id)a3 behavior:(id)a4 sound:(id)a5;
- (void)sendResponse:(long long)a0 withBOOLResult:(BOOL)a1;
- (void)sendSuccessWithSelectedIndex:(unsigned long long)a0;

@end
