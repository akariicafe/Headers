@class NSString;

@interface BCUPurgeableImage : NSObject <BCUPurgeableImage> {
    struct CGImage { } *_image;
    struct __IOSurface { } *_surface;
}

@property (readonly, nonatomic) double contentsScale;
@property (readonly, nonatomic) struct CGImage { } *CGImage;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) id layerContents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
