@class NSString;

@interface DBIconModelStore : SBIconModelPropertyListFileStore

@property (readonly, nonatomic) NSString *vehicleId;

- (id)initWithVehicleId:(id)a0;
- (BOOL)saveDesiredIconState:(id)a0 error:(id *)a1;
- (id)loadCurrentIconState:(id *)a0;
- (BOOL)saveCurrentIconState:(id)a0 error:(id *)a1;
- (id)_iconListsByFlatteningPages:(id)a0;
- (void).cxx_destruct;

@end
