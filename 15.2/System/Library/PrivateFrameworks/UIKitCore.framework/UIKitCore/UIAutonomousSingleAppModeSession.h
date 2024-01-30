@class UIAutonomousSingleAppModeConfiguration;

@interface UIAutonomousSingleAppModeSession : NSObject

@property (copy, nonatomic) UIAutonomousSingleAppModeConfiguration *effectiveConfiguration;
@property (nonatomic, getter=isActive) BOOL active;

+ (void)__gaxTrampoline_requestSessionWithConfiguration:(id)a0 completion:(id /* block */)a1;
+ (void)requestSessionWithConfiguration:(id)a0 completion:(id /* block */)a1;
+ (id)__gaxTrampoline_currentlyActiveSession;
+ (id)currentlyActiveSession;

- (void)__gaxTrampoline_endSessionWithCompletion:(id /* block */)a0;
- (id)initWithEffectiveConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)endWithCompletion:(id /* block */)a0;
- (void)_guidedAccessStateDidChange:(id)a0;
- (void)dealloc;

@end
