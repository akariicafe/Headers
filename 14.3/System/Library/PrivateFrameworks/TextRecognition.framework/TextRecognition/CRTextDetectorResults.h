@class NSArray, NSDictionary, NSDate, NSMutableArray;

@interface CRTextDetectorResults : NSObject

@property (retain, nonatomic) NSDictionary *inputOptions;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;
@property (retain, nonatomic) NSArray *textFeatures;
@property (retain, nonatomic) NSArray *pyramidPreIntraScaleNMSTextFeatures;
@property (retain, nonatomic) NSArray *pyramidPostIntraScaleNMSTextFeatures;
@property (retain, nonatomic) NSArray *pyramidPostInterScaleNMSTextFeatures;
@property (retain, nonatomic) NSMutableArray *pyramidScaleSize;

- (void).cxx_destruct;

@end
