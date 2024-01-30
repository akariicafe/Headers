@class NSString, NSDictionary, NSData;

@interface PBUIWallpaperOptions : NSObject <NSCopying, BSDescriptionProviding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL parallaxEnabled;
@property (nonatomic) double parallaxFactor;
@property (nonatomic, getter=isMagnifyEnabled) BOOL magnifyEnabled;
@property (nonatomic) double zoomScale;
@property (nonatomic) BOOL supportsCropping;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (nonatomic) BOOL supportsRotation;
@property (nonatomic) double rotationAngle;
@property (nonatomic, getter=isPortrait) BOOL portrait;
@property (nonatomic) BOOL hasVideo;
@property (nonatomic) double stillTimeInVideo;
@property (nonatomic) long long wallpaperMode;
@property (nonatomic) long long wallpaperStatus;
@property (copy, nonatomic) NSDictionary *wallpaperKitData;
@property (readonly, copy, nonatomic) NSData *persistentDataRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)optionsWithName:(id)a0 parallaxFactor:(double)a1 zoomScale:(double)a2 supportsCropping:(BOOL)a3 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 portrait:(BOOL)a5 hasVideo:(BOOL)a6 stillTimeInVideo:(double)a7;
+ (id)optionsWithName:(id)a0 parallaxFactor:(double)a1 zoomScale:(double)a2 supportsCropping:(BOOL)a3 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 portrait:(BOOL)a5 hasVideo:(BOOL)a6 stillTimeInVideo:(double)a7 wallpaperKitData:(id)a8;
+ (id)optionsWithName:(id)a0 parallaxFactor:(double)a1 zoomScale:(double)a2 supportsCropping:(BOOL)a3 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 portrait:(BOOL)a5 hasVideo:(BOOL)a6 stillTimeInVideo:(double)a7 wallpaperMode:(long long)a8 wallpaperStatus:(long long)a9 wallpaperKitData:(id)a10;
+ (id)optionsWithName:(id)a0 parallaxFactor:(double)a1 zoomScale:(double)a2 supportsCropping:(BOOL)a3 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 portrait:(BOOL)a5;
+ (id)optionsWithName:(id)a0 parallaxFactor:(double)a1 zoomScale:(double)a2 supportsCropping:(BOOL)a3 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 portrait:(BOOL)a5 hasVideo:(BOOL)a6 stillTimeInVideo:(double)a7 wallpaperMode:(long long)a8 wallpaperStatus:(long long)a9;
+ (id)optionsWithName:(id)a0 parallaxFactor:(double)a1 zoomScale:(double)a2 supportsCropping:(BOOL)a3 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 supportsRotation:(BOOL)a5 rotationAngle:(double)a6 portrait:(BOOL)a7 hasVideo:(BOOL)a8 stillTimeInVideo:(double)a9 wallpaperMode:(long long)a10 wallpaperStatus:(long long)a11;

- (void)encodeWithCoder:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithContentsOfURL:(id)a0;
- (id)initWithStream:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithCoder:(id)a0;
- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)succinctDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })bestWallpaperSizeForWallpaperSize:(struct CGSize { double x0; double x1; })a0 wallpaperScale:(double)a1 deviceType:(long long)a2 imageScale:(double)a3;
- (id)initWithName:(id)a0 parallaxFactor:(double)a1 zoomScale:(double)a2 supportsCropping:(BOOL)a3 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 supportsRotation:(BOOL)a5 rotationAngle:(double)a6 portrait:(BOOL)a7 hasVideo:(BOOL)a8 stillTimeInVideo:(double)a9 wallpaperMode:(long long)a10 wallpaperStatus:(long long)a11 wallpaperKitData:(id)a12;
- (id)initWithPersistentDataRepresentation:(id)a0;
- (BOOL)isLooselyEqualToWallpaperOptions:(id)a0;
- (id)persistentPropertyList;

@end
