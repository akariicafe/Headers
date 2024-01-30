@class NSArray, NSString, NSDictionary, HKOntologyEducationContent;

@interface HKMedicalUserDomainConcept : HKUserDomainConcept <NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _computedPropertyLock;
    BOOL _hasComputedEducationContent;
    HKOntologyEducationContent *_educationContent;
    BOOL _hasComputedLocalizedNames;
    NSDictionary *_preferredNameByLocaleIdentifier;
    NSString *_semanticIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *categoryTypes;
@property (readonly, copy, nonatomic) NSString *countryCode;
@property (readonly, copy, nonatomic) NSString *ontologyPreferredName;
@property (readonly, copy, nonatomic) NSDictionary *preferredNameByLocaleIdentifier;
@property (readonly, copy, nonatomic) HKOntologyEducationContent *educationContent;
@property (readonly, nonatomic) BOOL chartsBloodPressure;
@property (readonly, nonatomic) BOOL hidesOutOfRangeFilter;
@property (readonly, nonatomic) BOOL isLowUtility;

+ (id)_typeIdentifier;
+ (id)unitTesting_medicalUserDomainConceptWithCategoryType:(long long)a0;
+ (id)unitTesting_medicalUserDomainConceptWithCategoryType:(long long)a0 ontologyPreferredNameInUS:(id)a1 ontologyPreferredNameInGB:(id)a2 ontologyPreferredNameInCA:(id)a3;
+ (id)unitTesting_medicalUserDomainConceptWithCategoryTypes:(id)a0 countryCode:(id)a1 ontologyContentVersion:(long long)a2 ontologyPreferredName:(id)a3 codingCollection:(id)a4;

- (BOOL)unitTesting_isIdentical:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_deepCopy;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)_setCountryCode:(id)a0;
- (void)_setCategoryTypes:(id)a0;
- (id)_dataDescription;
- (id)initWithCategoryTypes:(id)a0 countryCode:(id)a1 codingCollection:(id)a2 propertyCollection:(id)a3;
- (id)_generateSemanticIdentifier;
- (id)initWithCodingCollection:(id)a0 linkCollection:(id)a1 propertyCollection:(id)a2;
- (id)medicalConceptByAddingCategoryType:(long long)a0;
- (id)initWithCategoryTypes:(id)a0;
- (id)medicalConceptByReplacingCategoryTypes:(id)a0 codingCollection:(id)a1 linkCollection:(id)a2;
- (id)semanticIdentifier;

@end
