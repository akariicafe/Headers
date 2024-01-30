@class VKCRemoveBackgroundRequest;

@interface VKCRemoveBackgroundResult : NSObject {
    struct __CVBuffer { } *_pixelBuffer;
}

@property (readonly, nonatomic) VKCRemoveBackgroundRequest *request;
@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (nonatomic) struct CGImage { } *maskImage;
@property (nonatomic) struct CGImage { } *orientedMaskImage;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedCropRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (readonly, nonatomic) long long imageOrientation;

- (void)dealloc;
- (void).cxx_destruct;
- (struct CGImage { } *)createCGImage;
- (void)generateImageMaskIfNecessaryWithContext:(id)a0;
- (id)initWithMADResult:(id)a0 request:(id)a1;

@end
