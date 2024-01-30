@class NSString, NSSet, NSDate;

@interface HKSPTestObject : NSObject <HKSPObject>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *testProperty;
@property (readonly, nonatomic) NSString *otherProperty;
@property (readonly, nonatomic) HKSPTestObject *testRelationship;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) NSSet *significantChanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mutableCopy;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_equateTo:(id)a0 builderBuilderBlock:(id /* block */)a1;
- (BOOL)isEquivalentTo:(id)a0;
- (id)initFromObject:(id)a0;
- (void)copyFromObject:(id)a0;
- (BOOL)_isMutable;
- (id)initWithCoder:(id)a0;
- (id)initWithTestProperty:(id)a0 testRelationship:(id)a1;
- (id)initWithTestProperty:(id)a0 otherProperty:(id)a1 testRelationship:(id)a2;
- (id)initWithTestProperty:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)_buildForEquivalenceTo:(id)a0 builder:(id)a1;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
