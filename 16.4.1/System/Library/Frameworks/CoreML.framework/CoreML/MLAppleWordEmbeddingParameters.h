@class NSString, NSData, NSDictionary;

@interface MLAppleWordEmbeddingParameters : NSObject

@property unsigned long long revision;
@property (retain) NSString *language;
@property (retain) NSString *inputFeatureName;
@property (retain) NSString *outputFeatureName;
@property (retain) NSData *modelParameterData;
@property (retain) NSDictionary *metadata;

- (void).cxx_destruct;
- (id)initWithData:(unsigned long long)a0 language:(id)a1 inputFeatureName:(id)a2 outputFeatureName:(id)a3 modelData:(id)a4 error:(id *)a5;
- (id)initWithData:(unsigned long long)a0 language:(id)a1 inputFeatureName:(id)a2 outputFeatureName:(id)a3 modelData:(id)a4 metadata:(id)a5 error:(id *)a6;

@end
