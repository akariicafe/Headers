@class NSData, NSString, NSUUID;

@interface STCloudActivation : STUniquedManagedObject <STReconcilableObject, STSerializableManagedObject>

@property (nonatomic) long long activationType;
@property (retain, nonatomic) NSData *activationPlist;
@property (copy, nonatomic) NSString *ckRecordID;
@property (retain, nonatomic) NSData *ckRecordSystemFields;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSUUID *sortKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)reconcileWithManagedObjectContext:(id)a0 andUpdateLosers:(id)a1 error:(id *)a2;

@end
