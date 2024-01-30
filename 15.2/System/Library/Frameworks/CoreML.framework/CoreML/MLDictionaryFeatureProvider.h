@class NSDictionary, NSSet;

@interface MLDictionaryFeatureProvider : NSObject <MLFeatureProvider, NSFastEnumeration, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (id)featureValueForName:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)initWithFeatureValueDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithFeatureProvider:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFeatureProvider:(id)a0 featureNames:(id)a1;
- (id)objectForKeyedSubscript:(id)a0;

@end
