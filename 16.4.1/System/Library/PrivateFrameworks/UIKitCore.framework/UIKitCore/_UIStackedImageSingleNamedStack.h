@class _UIStackedImageSingleNamedLayerImage, NSString, NSArray;

@interface _UIStackedImageSingleNamedStack : NSObject <UINamedLayerStack>

@property (retain, nonatomic) _UIStackedImageSingleNamedLayerImage *layerImage;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *layers;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) struct CGImage { } *flattenedImage;
@property (readonly, nonatomic) id radiosityImage;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } radiosityImageScale;
@property (readonly, nonatomic) BOOL flatImageContainsCornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
