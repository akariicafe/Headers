@class JDTimestampedImage, NSArray, JDTimestampedPointCloud;

@interface JDMatchedDepthAndImage : NSObject

@property (retain, nonatomic) JDTimestampedImage *image;
@property (retain, nonatomic) JDTimestampedPointCloud *pointCloud;
@property (retain, nonatomic) NSArray *originalPointClouds;

- (void).cxx_destruct;

@end
