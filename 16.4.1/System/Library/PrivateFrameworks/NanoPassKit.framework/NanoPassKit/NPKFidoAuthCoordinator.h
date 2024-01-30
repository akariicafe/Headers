@class LAContext;

@interface NPKFidoAuthCoordinator : NSObject

@property (readonly, nonatomic) LAContext *context;

- (void)clearContext;
- (void).cxx_destruct;
- (BOOL)_isDeviceLocked;
- (BOOL)_isWristDetectDisabled;
- (void)requestAuthorizationWithCompletion:(id /* block */)a0;

@end
