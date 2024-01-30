@class NSArray, NSString, NSDictionary;

@interface MAElementFilter : NSObject

@property (readonly, nonatomic) NSArray *kgLabels;
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, nonatomic) unsigned short domain;
@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly, nonatomic) NSString *visualString;

+ (id)any;
+ (BOOL)scanElementFilterLabel:(out id *)a0 domain:(out int *)a1 properties:(out id *)a2 withScanner:(id)a3;
+ (BOOL)scanProperties:(out id *)a0 withScanner:(id)a1;
+ (BOOL)scanPropertyValue:(out id *)a0 withScanner:(id)a1;
+ (BOOL)scanInstance:(out id *)a0 withScanner:(id)a1;
+ (id)scanFilterWithScanner:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)matchesElement:(id)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (void)appendVisualStringToString:(id)a0;

@end
