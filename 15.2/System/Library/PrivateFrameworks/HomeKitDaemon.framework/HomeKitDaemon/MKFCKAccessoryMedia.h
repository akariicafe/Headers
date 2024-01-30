@class HMFPairingIdentity;

@interface MKFCKAccessoryMedia : MKFCKAccessory

@property (retain, nonatomic) HMFPairingIdentity *pairingIdentity;

+ (id)fetchRequest;
+ (id)fetchWithLocalModel:(id)a0 context:(id)a1;

- (BOOL)importIntoLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (BOOL)exportFromLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (id)fetchLocalModelWithContext:(id)a0;

@end
