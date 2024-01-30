@class NSArray, HKOntologyLocalizedEducationContentSection;

@interface HKOntologyLocalizedEducationContent : HKUserDomainConceptProperty <NSFastEnumeration>

@property (readonly, copy, nonatomic) NSArray *sections;
@property (readonly, nonatomic) long long count;
@property (readonly, copy, nonatomic) HKOntologyLocalizedEducationContentSection *primarySection;

+ (BOOL)supportsSecureCoding;
+ (id)_mergeDataFromSectionsInto:(id)a0 fromContent:(id)a1 options:(unsigned long long)a2;
+ (id)mergeListsOfPropertiesWithType:(long long)a0 intoListOfProperties:(id)a1 fromListOfProperties:(id)a2 options:(unsigned long long)a3;
+ (id)nullPropertyWithVersion:(long long)a0;
+ (id)nullPropertyWithVersion:(long long)a0 timestamp:(double)a1;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)valueDescription;
- (id)_sectionsUniquedByLocaleSectionTypePairing;
- (id)allSectionsWithType:(long long)a0;
- (id)firstSectionWithType:(long long)a0;
- (id)initWithSections:(id)a0 version:(long long)a1 timestamp:(double)a2 deleted:(BOOL)a3;
- (id)initWithType:(long long)a0 version:(long long)a1 timestamp:(double)a2 deleted:(BOOL)a3;

@end
