@class NSDictionary;

@interface _DPAlgorithmParameters : NSObject

@property (readonly, nonatomic) NSDictionary *parameterDictionary;

+ (id)algorithmParametersFromDictionary:(id)a0;
+ (id)algorithmParametersForKey:(id)a0;
+ (id)allAlgorithmNames;
+ (id)parametersFromFile:(id)a0;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
