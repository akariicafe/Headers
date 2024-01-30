@interface SBSApplicationCarPlayService : NSObject

- (void)fetchApplicationIconInformationForBundleIdentifier:(id)a0 inVehicle:(id)a1 withCompletion:(id /* block */)a2;
- (void)fetchIconStateForVehicleId:(id)a0 withCompletion:(id /* block */)a1;
- (void)resetIconStateForVehicleId:(id)a0;
- (void)setIconState:(id)a0 hiddenIcons:(id)a1 forVehicleId:(id)a2;

@end
