@class NSString, NSDictionary;

@interface _DPAlgorithmParameters : NSObject

@property (readonly, copy, nonatomic) NSString *serverAlgorithmString;
@property (readonly, nonatomic) NSDictionary *parameterDictionary;

+ (id)algorithmParametersFromDictionary:(id)a0;
+ (id)algorithmParametersForKey:(id)a0;
+ (id)allAlgorithmNames;
+ (id)parametersFromFile:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)a0;

@end
