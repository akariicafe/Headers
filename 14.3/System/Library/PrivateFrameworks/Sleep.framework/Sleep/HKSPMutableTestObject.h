@class HKSPChangeSet, NSString, NSSet, HKSPTestObject, NSDate;

@interface HKSPMutableTestObject : HKSPTestObject <HKSPMutableObject>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *testProperty;
@property (copy, nonatomic) NSString *otherProperty;
@property (retain, nonatomic) HKSPTestObject *testRelationship;
@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) HKSPChangeSet *changeSet;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) NSSet *significantChanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
