@class NSString, NSDictionary, NSArray, NSNumber;

@interface ADRecipe : NSObject

@property (retain, nonatomic) NSString *experimentID;
@property (retain, nonatomic) NSDictionary *translationMap;
@property (retain, nonatomic) NSArray *testWeights;
@property (retain, nonatomic) NSNumber *scalingRatio;
@property (nonatomic) BOOL isMissingRequiredData;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)translationWeights:(id)a0;

@end
