@class LAContext;

@interface NPKFidoAuthCoordinator : NSObject

@property (readonly, nonatomic) LAContext *context;

- (void).cxx_destruct;
- (void)clearContext;
- (BOOL)_isDeviceLocked;
- (BOOL)_isWristDetectDisabled;
- (void)requestAuthorizationWithCompletion:(id /* block */)a0;

@end
