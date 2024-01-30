@class NSArray, MLModel, NSDictionary, NSString, NSNumber;

@interface SLODLDClassifierV1 : NSObject <SLODLDModelComponent>

@property (retain, nonatomic) MLModel *odldClassifier;
@property (retain, nonatomic) NSDictionary *inputSpecs;
@property (retain, nonatomic) NSArray *outputNodes;
@property (retain, nonatomic) NSNumber *inputOrigin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithConfigFile:(id)a0;
- (id)_constructFeatureDictionary:(id)a0;
- (id)_convert1dMLMultiArrayToNSArray:(id)a0;
- (void)_extractModelSpecs;
- (float)processEncodedTokens:(id)a0;

@end
