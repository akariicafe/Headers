@class CKDistributedTimestampAttributedVector;

@interface CKDistributedTimestampClockVector : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CKDistributedTimestampAttributedVector *backingVector;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)allSiteIdentifiers;
- (id)clockValuesForSiteIdentifier:(id)a0;
- (id)clockVector;
- (void)enumerateAllClockValuesUsingBlock:(id /* block */)a0;
- (BOOL)includesTimestamp:(id)a0;
- (void)intersectVector:(id)a0;
- (BOOL)isGreaterThanOrEqualToVector:(id)a0;
- (void)minusVector:(id)a0;
- (unsigned long long)timestampCount;
- (void)unionVector:(id)a0;
- (void)_checkInvariantsAgainstClockValues:(id)a0 withSiteIdentifier:(id)a1 ofType:(unsigned char)a2;
- (void)_checkInvariantsAgainstVector:(id)a0;
- (void)_maintainInvariants;
- (void)addClockValuesInIndexSet:(id)a0 forSiteIdentifier:(id)a1;
- (void)addClockValuesInIndexSet:(id)a0 withClockType:(unsigned char)a1 forSiteIdentifier:(id)a2;
- (id)allModifiers;
- (unsigned char)clockTypeForModifier:(id)a0;
- (unsigned char)clockTypeForTimestamp:(id)a0;
- (id)clockTypesForAllModifiers;
- (long long)compareToVector:(id)a0;
- (id)descriptionWithStringSiteIdentifiers:(BOOL)a0 usingSuperscripts:(BOOL)a1;
- (void)enumerateClockValuesForSiteIdentifier:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)hasTimestampsNotInVector:(id)a0;
- (void)removeClockValuesInIndexSet:(id)a0 forSiteIdentifier:(id)a1;
- (unsigned long long)timestampCountForSiteIdentifier:(id)a0;
- (unsigned char)vectorExpansionState;
- (id)vectorFillingInImplicitClockValuesUsingSiteIdentifiers:(id)a0;
- (id)vectorFilteredByClockType:(unsigned char)a0;
- (id)vectorFilteredByModifier:(id)a0;
- (id)vectorFilteredBySiteIdentifiers:(id)a0;

@end
