@class NSArray;

@interface VGExternalAccessoryModelFilter : NSObject

@property (retain, nonatomic) NSArray *modelIdAllowlist;
@property (retain, nonatomic) NSArray *denylist;

- (BOOL)allowsVehicleWithModelId:(id)a0 firmwareId:(id)a1 year:(id)a2 model:(id)a3;
- (id)init;
- (void)_initializeAllowAndDenylists;
- (void).cxx_destruct;

@end
