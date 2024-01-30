@class NSString, NSArray, NSData, NSDictionary;

@interface MLAppleWordTaggerParameters : NSObject

@property unsigned long long revision;
@property (retain) NSString *language;
@property (retain) NSString *inputFeatureName;
@property (retain) NSString *tokensOutputFeatureName;
@property (retain) NSString *tokenTagsOutputFeatureName;
@property (retain) NSString *tokenLocationsOutputFeatureName;
@property (retain) NSString *tokenLengthsOutputFeatureName;
@property (retain) NSData *modelParameterData;
@property (retain) NSArray *tagNames;
@property (retain) NSDictionary *metadata;

- (void).cxx_destruct;
- (id)initWithData:(unsigned long long)a0 language:(id)a1 inputFeatureName:(id)a2 tokensFeatureName:(id)a3 tokenTagsFeatureName:(id)a4 tokenLocationsFeatureName:(id)a5 tokenLengthsFeatureName:(id)a6 modelData:(id)a7 tagNames:(id)a8 error:(id *)a9;
- (id)initWithData:(unsigned long long)a0 language:(id)a1 inputFeatureName:(id)a2 tokensFeatureName:(id)a3 tokenTagsFeatureName:(id)a4 tokenLocationsFeatureName:(id)a5 tokenLengthsFeatureName:(id)a6 modelData:(id)a7 tagNames:(id)a8 metadata:(id)a9 error:(id *)a10;

@end
