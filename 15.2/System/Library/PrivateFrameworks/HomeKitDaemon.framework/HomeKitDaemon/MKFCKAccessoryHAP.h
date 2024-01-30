@class NSString, NSSet, NSData;

@interface MKFCKAccessoryHAP : MKFCKAccessory

@property (nonatomic) long long certificationStatus;
@property (nonatomic) BOOL hasOnboardedForNaturalLighting;
@property (retain, nonatomic) NSData *publicKey;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (retain, nonatomic) MKFCKAccessoryHAP *bridge;
@property (retain, nonatomic) NSSet *bridged;

+ (id)fetchRequest;
+ (id)fetchWithLocalModel:(id)a0 context:(id)a1;

- (BOOL)importIntoLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (BOOL)exportFromLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (id)fetchLocalModelWithContext:(id)a0;

@end
