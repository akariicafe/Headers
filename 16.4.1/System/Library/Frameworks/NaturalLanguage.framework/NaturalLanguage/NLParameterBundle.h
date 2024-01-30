@class NSArray, NSDictionary;

@interface NLParameterBundle : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *parameters;
@property (readonly, copy, nonatomic) NSArray *parameterNames;
@property (readonly, copy, nonatomic) NSDictionary *parameterValues;
@property (readonly, copy, nonatomic) NSDictionary *metadata;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)parameterBundleWithContentsOfURL:(id)a0 error:(id *)a1;
+ (id)parameterBundleWithParameters:(id)a0 values:(id)a1 metadata:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)getContinuousParameterValueForName:(id)a0 value:(double *)a1;
- (BOOL)getIntegralParameterValueForName:(id)a0 value:(long long *)a1;
- (id)initWithDictionaryRepresentation:(id)a0 error:(id *)a1;
- (id)initWithParameters:(id)a0 values:(id)a1 metadata:(id)a2;
- (id)parameterForName:(id)a0;
- (id)parameterValueForName:(id)a0;

@end
