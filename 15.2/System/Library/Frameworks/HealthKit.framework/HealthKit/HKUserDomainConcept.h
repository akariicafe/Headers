@class HKMedicalCodingCollection, NSString, NSUUID, HKUserDomainConceptLinkCollection, HKUserDomainConceptPropertyCollection, HKUserDomainConceptTypeIdentifier, NSDate;

@interface HKUserDomainConcept : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKUserDomainConceptTypeIdentifier *identifier;
@property (readonly, nonatomic, getter=isDeleted) BOOL deleted;
@property (readonly, nonatomic) double creationTimestamp;
@property (readonly, nonatomic) double modificationTimestamp;
@property (readonly, nonatomic) struct { long long majorVersion; long long minorVersion; long long patchVersion; } operatingSystemVersion;
@property (readonly, copy, nonatomic) NSString *build;
@property (readonly, copy, nonatomic) HKUserDomainConceptPropertyCollection *propertyCollection;
@property (readonly, copy, nonatomic) NSString *semanticIdentifier;
@property (readonly, copy, nonatomic) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly, copy, nonatomic) NSDate *modificationDate;
@property (readonly, copy, nonatomic) HKMedicalCodingCollection *codingCollection;
@property (readonly, copy, nonatomic) HKUserDomainConceptLinkCollection *linkCollection;

+ (id)_typeIdentifier;
+ (id)deletedUserDomainConceptWithUUID:(id)a0 creationTimestamp:(double)a1;

- (BOOL)isAdHocUserDomainConcept;
- (BOOL)isSemanticallyEquivalent:(id)a0;
- (id)firstOntologyCoding;
- (BOOL)unitTesting_isIdentical:(id)a0;
- (id)unitTesting_duplicate;
- (void)unitTesting_overrideCreationTimestamp:(double)a0;
- (void)unitTesting_overrideModificationTimestamp:(double)a0;
- (void)_setIdentifier:(id)a0;
- (void)_setUUID:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_deepCopy;
- (id)description;
- (void)_setCreationTimestamp:(double)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)_init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)_setBuild:(id)a0;
- (id)_dataDescription;
- (id)modificationCopy;
- (void)_setDeleted:(BOOL)a0;
- (void)_setCodingCollection:(id)a0;
- (id)initWithCodingCollection:(id)a0 linkCollection:(id)a1 propertyCollection:(id)a2;
- (void)_setLinkCollection:(id)a0;
- (void)_setPropertyCollection:(id)a0;
- (void)_setModificationTimestamp:(double)a0;
- (void)_setOperatingSystemVersion:(struct { long long x0; long long x1; long long x2; })a0;
- (id)firstAdhocCoding;
- (id)_initBareObject;
- (id)_firstCodingForSystem:(id)a0;
- (BOOL)unitTesting_isIdentical:(id)a0 ignoreModificationTimestamp:(BOOL)a1;
- (id)deletedUserDomainConcept;
- (id)userDomainConceptByAddingCodings:(id)a0;
- (id)userDomainConceptByReplacingCodings:(id)a0;
- (id)userDomainConceptByReplacingLinks:(id)a0;
- (id)userDomainConceptByReplacingProperties:(id)a0;

@end
