@protocol VIImageContent, MTLDevice;

@interface VIRefineRegionRequest : NSObject

@property (readonly, nonatomic) id<VIImageContent> image;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } regionOfInterest;
@property (readonly, nonatomic) long long imageType;
@property (readonly, nonatomic) id<MTLDevice> preferredMetalDevice;

- (void).cxx_destruct;
- (id)initWithImage:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 imageType:(long long)a2 preferredMetalDevice:(id)a3;

@end
