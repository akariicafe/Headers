@class NSString, NSArray;

@interface MLNonMaximumSuppressionParameters : NSObject

@property int suppressionMethod;
@property double iouThreshold;
@property double confidenceThreshold;
@property unsigned long long minBoxes;
@property long long maxBoxes;
@property unsigned long long numClasses;
@property BOOL perClass;
@property (retain) NSString *confidenceInputFeatureName;
@property (retain) NSString *coordinatesInputFeatureName;
@property (retain) NSString *iouThresholdInputFeatureName;
@property (retain) NSString *confidenceThresholdInputFeatureName;
@property (retain) NSString *confidenceOutputFeatureName;
@property (retain) NSString *coordinatesOutputFeatureName;
@property (retain) NSArray *labelNames;

- (void).cxx_destruct;
- (id)objectBoundingBoxOutputDescription;

@end
