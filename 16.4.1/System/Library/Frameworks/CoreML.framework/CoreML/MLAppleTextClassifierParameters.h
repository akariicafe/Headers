@class NSString, NSArray, NSData, NSDictionary;

@interface MLAppleTextClassifierParameters : NSObject

@property unsigned long long revision;
@property (retain) NSString *language;
@property (retain) NSString *inputFeatureName;
@property (retain) NSString *outputFeatureName;
@property (retain) NSData *modelParameterData;
@property (retain) NSArray *labelNames;
@property (retain) NSDictionary *metadata;

- (void).cxx_destruct;
- (id)initWithData:(unsigned long long)a0 language:(id)a1 inputFeatureName:(id)a2 outputFeatureName:(id)a3 modelData:(id)a4 labelNames:(id)a5 error:(id *)a6;
- (id)initWithData:(unsigned long long)a0 language:(id)a1 inputFeatureName:(id)a2 outputFeatureName:(id)a3 modelData:(id)a4 labelNames:(id)a5 metadata:(id)a6 error:(id *)a7;

@end
