@class NSString, NSArray;

@interface _SMUTVStackedImageNamedLayerStack : NSObject <UINamedLayerStack, NSCopying> {
    struct CGImage { } *_flattenedImage;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *layers;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double scale;
@property (nonatomic) struct CGImage { } *flattenedImage;
@property (retain, nonatomic) id radiosityImage;
@property (nonatomic) struct CGSize { double width; double height; } radiosityImageScale;
@property (nonatomic) BOOL flatImageContainsCornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
