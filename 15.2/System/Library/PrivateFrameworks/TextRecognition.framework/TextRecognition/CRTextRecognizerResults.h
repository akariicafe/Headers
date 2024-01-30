@class CRLatticeResults, NSArray, NSDictionary, NSDate;

@interface CRTextRecognizerResults : NSObject

@property (retain, nonatomic) NSDictionary *inputOptions;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;
@property (retain, nonatomic) NSArray *textFeatures;
@property (retain, nonatomic) NSArray *codeMaps;
@property (retain, nonatomic) CRLatticeResults *latticeResults;
@property (readonly) NSArray *lineFeatures;

- (void).cxx_destruct;

@end
