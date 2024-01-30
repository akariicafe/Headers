@class NSString, NSSet, CKDistributedTimestampClockVector, CKDistributedTimestampStateVector;

@interface CKMergeableDeltaMetadata : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSSet *replacedDeltaIdentifiers;
@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) CKDistributedTimestampClockVector *previousVector;
@property (readonly, nonatomic) CKDistributedTimestampStateVector *contentsVector;
@property (readonly, nonatomic) CKDistributedTimestampStateVector *removalsVector;
@property (readonly, nonatomic) CKDistributedTimestampClockVector *dependenciesVector;

+ (id)deliverableDeltaMetadatasInDeltaSet:(id)a0 withMergeableValueCurrentStateVector:(id)a1 deliveryRequirements:(unsigned long long)a2;
+ (id)pDistributedTimestampsFromAttributedVector:(id)a0;
+ (int)pClockTypeAndAtomStateFromClockType:(unsigned char)a0 atomState:(unsigned char)a1;
+ (id)pDistributedTimestampsFromDeltaMetadata:(id)a0;
+ (id)pSiteIdentifierFromSiteIdentifier:(id)a0;
+ (unsigned char)atomStateFromPClockTypeAndAtomState:(int)a0;
+ (id)attributedVectorFromPDistributedTimestamps:(id)a0 error:(id *)a1;
+ (id)pDistributedTimestampsWithPreviousVector:(id)a0 contentsVector:(id)a1 removalsVector:(id)a2 dependenciesVector:(id)a3;
+ (unsigned char)clockTypeFromPClockTypeAndAtomState:(int)a0;
+ (BOOL)addToAttributedVector:(id)a0 fromPVersionVector:(id)a1 forSiteIdentifier:(id)a2 error:(id *)a3;
+ (id)mergeableDeltaMetadataByCombiningMetadatas:(id)a0;
+ (id)pVersionVectorFromAttributedVector:(id)a0 siteIdentifier:(id)a1;
+ (id)siteIdentifierFromPSiteIdentifier:(id)a0;
+ (id)replacementDeltaMetadatasForDeltaDirectory:(id)a0 withNextDeltaMetadata:(id)a1 currentStateVector:(id)a2 deltaDirectoryDeliveryRequirements:(unsigned long long)a3;
+ (BOOL)mergeTimestamps:(id)a0 intoDeltaMetadata:(id)a1 error:(id *)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 previousVector:(id)a1 contentsVector:(id)a2 removalsVector:(id)a3 dependenciesVector:(id)a4;
- (id)initWithPreviousStateVector:(id)a0 currentStateVector:(id)a1;
- (BOOL)_validate:(id *)a0;
- (id)initWithIdentifier:(id)a0 previousVector:(id)a1 contentsVector:(id)a2 removalsVector:(id)a3 dependenciesVector:(id)a4 replacedDeltaIdentifiers:(id)a5;
- (BOOL)_isEquivalent:(id)a0;
- (id)descriptionWithStringSiteIdentifiers:(BOOL)a0 usingSuperscripts:(BOOL)a1;
- (id)initWithIdentifier:(id)a0 previousStateVector:(id)a1 currentStateVector:(id)a2;
- (BOOL)isEqualToBatchMetadata:(id)a0;
- (unsigned long long)vectorsProtobufSize;

@end
