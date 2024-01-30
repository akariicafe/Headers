@class NSData, NSString, NSArray, UIImage, NSItemProvider, NSURL, LPImageProperties, NSObject;
@protocol OS_dispatch_group;

@interface LPImage : NSObject <LPAsynchronousResource, NSSecureCoding> {
    UIImage *_originalPlatformImage;
    UIImage *_decodedPlatformImage;
    NSData *_data;
    NSString *_MIMEType;
    LPImageProperties *_properties;
    NSItemProvider *_itemProvider;
    LPImage *_imageLoadedFromItemProvider;
    NSObject<OS_dispatch_group> *_itemProviderLoadGroup;
    NSObject<OS_dispatch_group> *_asynchronousLoadGroup;
    struct CGSize { double width; double height; } _pixelSize;
    BOOL _hasComputedPixelSize;
    BOOL _hasTransparency;
    BOOL _hasComputedHasTransparency;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) UIImage *platformImage;
@property (readonly, nonatomic) unsigned long long _encodedSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } _pixelSize;
@property (readonly, nonatomic) BOOL _isImperceptible;
@property (readonly, nonatomic) BOOL _hasTransparency;
@property (readonly, nonatomic, getter=_isAnimated) BOOL _animated;
@property (nonatomic, getter=_isFallbackIcon) BOOL _fallbackIcon;
@property (retain, nonatomic) NSArray *_remoteURLsForEmailCompatibleOutput;
@property (readonly, copy, nonatomic) NSString *_srcsetForRemoteURLs;
@property (copy, nonatomic) id /* block */ _alternateHTMLImageGenerator;
@property (readonly, retain, nonatomic) NSItemProvider *_itemProvider;
@property (retain, nonatomic, setter=_setDarkInterfaceAlternativeImage:) LPImage *_darkInterfaceAlternativeImage;
@property (retain, nonatomic) NSURL *fileURL;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSString *MIMEType;
@property (readonly, copy, nonatomic) LPImageProperties *properties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_PNGImageNamed:(id)a0 template:(BOOL)a1;
+ (id)_loadImageSubsampledToScreenSizeFromData:(id)a0;
+ (id)_PNGImageNamed:(id)a0;
+ (id)_PDFImageNamed:(id)a0 template:(BOOL)a1;

- (id)init;
- (id)initWithItemProvider:(id)a0 properties:(id)a1 placeholderImage:(id)a2;
- (id)initWithData:(id)a0 MIMEType:(id)a1;
- (void).cxx_destruct;
- (id)_initWithImage:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0 MIMEType:(id)a1 properties:(id)a2;
- (id)_initWithCGImage:(struct CGImage { } *)a0;
- (id)initWithPlatformImage:(id)a0 properties:(id)a1;
- (id)initByReferencingFileURL:(id)a0 MIMEType:(id)a1 properties:(id)a2;
- (id)_initWithPlatformImageGenerator:(id /* block */)a0;
- (BOOL)_shouldEncodeData;
- (void)_waitForAsynchronouslyLoadedImageIfNeeded;
- (void)_mapDataFromFileURL;
- (void)_createDataFromPlatformImage;
- (BOOL)needsAsynchronousLoad;
- (void)loadAsynchronouslyWithCompletionHandler:(id /* block */)a0;
- (id)_initWithImage:(id)a0 properties:(id)a1;
- (id)initByReferencingFileURL:(id)a0 MIMEType:(id)a1;
- (id)_initWithCGImage:(struct CGImage { } *)a0 properties:(id)a1;
- (void)_synchronouslyDecodePlatformImageWithMaximumSize:(struct CGSize { double x0; double x1; })a0;
- (void)_preparePlatformImageWithCompletionHandler:(id /* block */)a0;
- (id)_asTemplate;
- (id)initWithPlatformImage:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
