@class HKMedicalCoding, NSString, NSArray, NSSet, NSMutableArray, HKConceptAttribute, HKConceptIdentifier;

@interface HKConcept : NSObject <NSSecureCoding> {
    NSArray *_relationships;
    NSMutableArray *_attributes;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *nodeName;
@property (readonly, copy, nonatomic) NSString *preferredName;
@property (readonly, copy, nonatomic) NSString *localizedPreferredName;
@property (readonly, copy, nonatomic) HKConceptIdentifier *identifier;
@property (readonly, copy, nonatomic) NSSet *validInRegions;
@property (readonly, copy, nonatomic) NSArray *attributes;
@property (readonly, copy, nonatomic) NSArray *relationships;
@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) BOOL relationshipsAreLoaded;
@property (readonly, nonatomic) BOOL isUndefined;
@property (readonly, nonatomic) BOOL isAdHoc;
@property (readonly, nonatomic) BOOL isNebulous;
@property (readonly, nonatomic) BOOL chartsBloodPressure;
@property (readonly, nonatomic) BOOL hidesOutOfRangeFilter;
@property (readonly, copy, nonatomic) NSArray *synonyms;
@property (readonly, copy, nonatomic) HKConceptAttribute *adHocCode;
@property (readonly, copy, nonatomic) HKMedicalCoding *LOINCCode;
@property (readonly, copy, nonatomic) HKMedicalCoding *RxNormCoding;
@property (readonly, copy, nonatomic) HKConcept *groupByConcept;
@property (readonly, copy, nonatomic) HKConcept *chartedWithConcept;
@property (readonly, copy, nonatomic) HKConcept *strength;
@property (readonly, copy, nonatomic) HKConcept *form;
@property (readonly, copy, nonatomic) NSArray *modifiers;
@property (readonly, copy, nonatomic) NSArray *brandNames;

+ (id)preferredLanguages;
+ (id)fallbackLanguagesForLocale:(id)a0;
+ (id)conceptWithIdentifier:(id)a0 attributes:(id)a1 relationships:(id)a2;
+ (id)_conceptWithIdentifier:(id)a0 attributes:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)firstAttributeForType:(long long)a0;
- (id)initWithIdentifier:(id)a0 attributes:(id)a1 relationships:(id)a2 relationshipsAreLoaded:(BOOL)a3;
- (id)_firstConceptOfRelationshipType:(long long)a0;
- (void)enumerateAttributesWithType:(long long)a0 block:(id /* block */)a1;
- (id)stringsForAttributeType:(long long)a0;
- (id)_conceptsOfRelationshipType:(long long)a0;
- (id)attributesForType:(long long)a0;
- (void)setRelationships:(id)a0;
- (void)addAttribute:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
