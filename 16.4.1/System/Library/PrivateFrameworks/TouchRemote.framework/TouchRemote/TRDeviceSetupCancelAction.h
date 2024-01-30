@class NSError;

@interface TRDeviceSetupCancelAction : TRDeviceSetupAction

@property (readonly, nonatomic) NSError *error;

- (id)initWithError:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
