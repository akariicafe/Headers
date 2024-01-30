@class NSString, HMFPairingIdentity;

@interface MKFCKAirPlayAccessory : MKFCKAccessory

@property (nonatomic) short minimumUserPrivilege;
@property (retain, nonatomic) HMFPairingIdentity *pairingIdentity;
@property (copy, nonatomic) NSString *password;

+ (id)fetchRequest;
+ (id)fetchWithLocalModel:(id)a0 context:(id)a1;

- (BOOL)exportFromLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (id)fetchLocalModelWithContext:(id)a0;
- (BOOL)importIntoLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (BOOL)validateMinimumUserPrivilege:(id *)a0 error:(id *)a1;

@end
