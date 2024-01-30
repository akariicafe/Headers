@class NSURL;

@interface MSVArtworkServiceResizeRequestDestination : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long format;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) NSURL *destinationURL;
@property (readonly, nonatomic) double compressionQuality;

+ (id)destinationWithFormat:(long long)a0 size:(struct CGSize { double x0; double x1; })a1 url:(id)a2;
+ (id)jpegDestinationWithSize:(struct CGSize { double x0; double x1; })a0 compressionQuality:(double)a1 url:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithFormat:(long long)a0 size:(struct CGSize { double x0; double x1; })a1 compressionQuality:(double)a2 destinationURL:(id)a3;

@end
