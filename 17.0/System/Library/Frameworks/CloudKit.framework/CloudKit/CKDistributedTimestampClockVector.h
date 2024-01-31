@class CKDistributedTimestampAttributedVector;

@interface CKDistributedTimestampClockVector : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CKDistributedTimestampAttributedVector *backingVector;

+ (void)initialize;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_checkInvariantsAgainstClockValues:(id)a0 withSiteIdentifier:(id)a1 ofType:(unsigned char)a2;
- (void)_checkInvariantsAgainstVector:(id)a0;
- (void)_maintainInvariants;
- (void)addClockValuesInIndexSet:(id)a0 forSiteIdentifier:(id)a1;
- (void)addClockValuesInIndexSet:(id)a0 withClockType:(unsigned char)a1 forSiteIdentifier:(id)a2;
- (id)allModifiers;
- (id)allSiteIdentifiers;
- (unsigned char)clockTypeForModifier:(id)a0;
- (unsigned char)clockTypeForTimestamp:(id)a0;
- (id)clockTypesForAllModifiers;
- (id)clockValuesForSiteIdentifier:(id)a0;
- (id)clockVector;
- (long long)compareToVector:(id)a0;
- (id)descriptionWithStringSiteIdentifiers:(BOOL)a0 usingSuperscripts:(BOOL)a1;
- (void)enumerateAllClockValuesUsingBlock:(id /* block */)a0;
- (void)enumerateClockValuesForSiteIdentifier:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)hasTimestampsNotInVector:(id)a0;
- (BOOL)includesTimestamp:(id)a0;
- (void)intersectVector:(id)a0;
- (BOOL)isGreaterThanOrEqualToVector:(id)a0;
- (void)minusVector:(id)a0;
- (void)removeClockValuesInIndexSet:(id)a0 forSiteIdentifier:(id)a1;
- (unsigned long long)timestampCount;
- (unsigned long long)timestampCountForSiteIdentifier:(id)a0;
- (void)unionVector:(id)a0;
- (unsigned char)vectorExpansionState;
- (id)vectorFillingInImplicitClockValuesUsingSiteIdentifiers:(id)a0;
- (id)vectorFilteredByClockType:(unsigned char)a0;
- (id)vectorFilteredByModifier:(id)a0;
- (id)vectorFilteredBySiteIdentifiers:(id)a0;

@end
