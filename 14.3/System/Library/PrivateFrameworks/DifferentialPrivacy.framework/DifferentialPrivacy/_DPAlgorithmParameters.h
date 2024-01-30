@class NSString, NSDictionary;

@interface _DPAlgorithmParameters : NSObject

@property (readonly, copy, nonatomic) NSString *serverAlgorithmString;
@property (readonly, nonatomic) NSDictionary *parameterDictionary;

+ (id)parametersFromFile:(id)a0;
+ (id)algorithmParametersFromDictionary:(id)a0;
+ (id)algorithmParametersForKey:(id)a0;
+ (id)allAlgorithmNames;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;

@end
