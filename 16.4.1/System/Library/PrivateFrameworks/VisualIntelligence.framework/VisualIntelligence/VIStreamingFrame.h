@protocol VIImageContent;

@interface VIStreamingFrame : NSObject

@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) id<VIImageContent> imageContent;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedRegionOfInterest;
@property (readonly, nonatomic) double stabilityScore;

- (void).cxx_destruct;
- (id)initWithTimeStamp:(double)a0 imageContent:(id)a1 normalizedRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 stabilityScore:(double)a3;

@end
