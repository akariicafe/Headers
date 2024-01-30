@class NSURL, NSData, IOSurface;

@interface SBFCARendererImageRepresentation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long representationType;
@property (readonly, copy, nonatomic) NSURL *fileURL;
@property (readonly, copy, nonatomic) NSData *imageData;
@property (readonly, nonatomic) long long imageOrientation;
@property (readonly, nonatomic) IOSurface *surface;

+ (id)representationWithImage:(id)a0;
+ (id)representationWithIOSurface:(id)a0 imageOrientation:(long long)a1;
+ (id)representationWithFileURL:(id)a0 imageOrientation:(long long)a1;
+ (id)representationWithImageData:(id)a0 imageOrientation:(long long)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (struct CGImage { } *)createCGImageReturningScale:(double *)a0;

@end
