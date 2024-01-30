@class JDMatchedDepthAndImage, NSArray;

@interface JDDepthAndImagePushResults : NSObject

@property (retain, nonatomic) JDMatchedDepthAndImage *match;
@property (retain, nonatomic) NSArray *droppedImages;

- (void).cxx_destruct;

@end
