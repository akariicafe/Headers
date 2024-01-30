@class NSArray, NSSet, NSDictionary, KGElementIdentifierSet, NSString;

@interface MAElementFilter : NSObject

@property (readonly, nonatomic) NSArray *kgRequiredLabels;
@property (readonly, nonatomic) NSArray *kgOptionalLabels;
@property (readonly, copy, nonatomic) NSSet *labels;
@property (readonly, copy, nonatomic) KGElementIdentifierSet *domains;
@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly, nonatomic) NSString *visualString;

+ (id)any;
+ (BOOL)scanElementFilterLabels:(out id *)a0 domains:(out id *)a1 properties:(out id *)a2 withScanner:(id)a3;
+ (BOOL)scanLabels:(out id *)a0 withScanner:(id)a1;
+ (BOOL)scanDomains:(out id *)a0 withScanner:(id)a1;
+ (BOOL)scanProperties:(out id *)a0 withScanner:(id)a1;
+ (BOOL)scanPropertyOption:(out id *)a0 withScanner:(id)a1;
+ (BOOL)scanPropertyValue:(out id *)a0 withScanner:(id)a1;
+ (BOOL)scanInstance:(out id *)a0 withScanner:(id)a1;
+ (id)scanFilterWithScanner:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)matchesElement:(id)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1;
- (id)filterBySettingProperties:(id)a0;
- (id)initWithLabels:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)initWithLabel:(id)a0 domains:(id)a1 properties:(id)a2;
- (id)initWithLabels:(id)a0 domains:(id)a1 properties:(id)a2;
- (BOOL)matchesLabelOfElement:(id)a0;
- (BOOL)matchesDomainOfElement:(id)a0;
- (BOOL)matchesPropertiesOfElement:(id)a0;
- (void)_appendPropertyOption:(id)a0 toString:(id)a1;
- (void)appendVisualStringToString:(id)a0;

@end
