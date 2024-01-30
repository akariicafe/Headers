@class AMDBusinessLogic, NSString, NSArray, NSNumber, AMDDictionaryFeatureProvider;

@interface OutputDefinition : NSObject

@property (retain, nonatomic) NSString *modelOutputName;
@property (retain, nonatomic) NSString *mode;
@property (retain, nonatomic) NSNumber *modelTopN;
@property (retain, nonatomic) NSString *remapDictionaryId;
@property (retain, nonatomic) NSNumber *scoreThresholdAsMultipleOfRandomScore;
@property (retain, nonatomic) NSArray *bitmaskIds;
@property (retain, nonatomic) AMDDictionaryFeatureProvider *features;
@property (retain, nonatomic) AMDBusinessLogic *businessLogic;

- (void).cxx_destruct;
- (BOOL)isValid;
- (id)initWithOutputDefinitionDictionary:(id)a0;

@end
