@class STKSessionBehavior;

@interface STKSIMToolkitAlertSession : STKAlertSession

@property (readonly, nonatomic) long long event;
@property (readonly, nonatomic) STKSessionBehavior *behavior;

- (void).cxx_destruct;
- (void)sendResponse:(long long)a0 withBOOLResult:(BOOL)a1;
- (void)remoteAlertHandleDidActivate:(id)a0;
- (void)sendSuccessWithSelectedIndex:(unsigned long long)a0;
- (id)initWithLogger:(id)a0 responseProvider:(id)a1 event:(long long)a2 options:(id)a3 behavior:(id)a4 sound:(id)a5;

@end
