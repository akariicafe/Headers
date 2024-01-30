@class NSString, IOSurface, NSURL, NSData;

@interface PBUICodableImage : NSObject <NSSecureCoding, BSXPCSecureCoding> {
    long long _representation;
    IOSurface *_surface;
    NSURL *_url;
    struct CGImage { } *_sourceImage;
    NSData *_bitmapSourceData;
    struct CGImage { } *_cachedImage;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) struct CGImage { } *CGImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;
+ (BOOL)bs_encodeRepresentation:(long long)a0 value:(id)a1 withCoder:(id)a2;
+ (struct CGImage { } *)createCGImageFromCPBitmapData:(id)a0 error:(out id *)a1;
+ (struct CGImage { } *)createCGImageFromData:(id)a0 error:(out id *)a1;
+ (struct CGImage { } *)createCGImageFromURL:(id)a0 error:(out id *)a1;
+ (id)dataRepresentationForImage:(struct CGImage { } *)a0 error:(out id *)a1;
+ (void)encodeRepresentation:(long long)a0 value:(id)a1 withCoder:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (void)setImage:(struct CGImage { } *)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initFromSourceData:(id)a0 scale:(double)a1 error:(out id *)a2;
- (struct CGImage { } *)buildCGImageWithError:(id *)a0;
- (id)initFromURL:(id)a0 scale:(double)a1 error:(out id *)a2;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 error:(out id *)a2;
- (id)initWithIOSurface:(id)a0 scale:(double)a1 error:(out id *)a2;
- (id)initWithUIImage:(id)a0 error:(out id *)a1;
- (BOOL)isEqualRepresentation:(id)a0;
- (BOOL)refersToIdenticalImageFrom:(id)a0;
- (id)wrappedIOSurface;

@end
