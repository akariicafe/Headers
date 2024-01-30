@class NSNumber;

@interface SGQuickResponsesReplyOption : NSObject

@property (readonly, nonatomic) NSNumber *position;
@property (readonly, nonatomic) NSNumber *ucb;

+ (double)ucbCombinedForSelected:(double)a0 displayed:(double)a1 actualOptionsDisplayed:(double)a2 matched:(double)a3 imputedDisplayed:(double)a4 imputedOptionsDisplayed:(double)a5 explorationFactor:(double)a6;
+ (double)ucbTunedVarianceForMean:(double)a0 displayed:(double)a1 totalDisplayed:(double)a2;
+ (double)ucbWithMean:(double)a0 varianceOfMean:(double)a1 explorationFactor:(double)a2;
+ (double)ucbCombinedWithMeanA:(double)a0 meanB:(double)a1 varianceA:(double)a2 varianceB:(double)a3 explorationFactor:(double)a4;
+ (id)sortedReplyOptionsForRecords:(id)a0 config:(id)a1;
+ (double)totalDisplayedCountForRecords:(id)a0;
+ (id)imputedDisplayedForRecords:(id)a0 config:(id)a1;

- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)initWithPosition:(unsigned long long)a0 records:(id)a1 actualOptionsDisplayedCount:(double)a2 imputedOptionsDisplayedCount:(double)a3 imputedOptionsDisplayed:(id)a4 config:(id)a5;

@end
