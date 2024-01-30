@class NSString;

@interface PLImageFormat : NSObject

@property (nonatomic) unsigned short formatID;
@property (nonatomic) long long thumbnailKind;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) BOOL isCropped;
@property (readonly, nonatomic) double dimension;
@property (readonly, nonatomic) long long formatMode;
@property (readonly, nonatomic) BOOL isSquare;
@property (readonly, nonatomic) BOOL dimensionsReferToShortSide;
@property (readonly, nonatomic) BOOL isTable;
@property (readonly, nonatomic) BOOL isThumbnail;
@property (readonly, nonatomic) BOOL isAlwaysFullScreen;
@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) BOOL refersToLatestVersion;
@property (readonly, nonatomic) BOOL refersToUnadjustedVersion;
@property (readonly, nonatomic) BOOL refersToPenultimateVersion;
@property (readonly, nonatomic) BOOL refersToOriginalVersion;

+ (id)_syncFormats;
+ (id)formatWithID:(unsigned short)a0;

- (BOOL)isThumbnail;
- (id)init;
- (void).cxx_destruct;
- (id)shortDescription;
- (BOOL)isTable;
- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (id)thumbnailSpecification;
- (BOOL)isEqualToFormat:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)fullSizeMinShortSide;
- (unsigned long long)fullSizeDesiredLongSide;
- (unsigned long long)fullSizeMaxLongSide;
- (struct CGSize { double x0; double x1; })scaledSizeForSourceSize:(struct CGSize { double x0; double x1; })a0 capLength:(BOOL)a1;
- (struct CGSize { double x0; double x1; })scaledSizeForSourceSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)_canDegradeToFormat:(id)a0;
- (BOOL)_isAcceptableForViewSize:(struct CGSize { double x0; double x1; })a0 contentMode:(long long)a1 sourceAspectRatio:(double)a2 desiredImageSize:(struct CGSize { double x0; double x1; })a3 demoteFactor:(double)a4;
- (id)initWithName:(id)a0 size:(struct CGSize { double x0; double x1; })a1 isCropped:(BOOL)a2;
- (id)initWithName:(id)a0 size:(struct CGSize { double x0; double x1; })a1 isCropped:(BOOL)a2 version:(long long)a3 isAlwaysFullScreen:(BOOL)a4;
- (id)initWithFormatID:(unsigned short)a0;
- (id)initWithName:(id)a0 size:(struct CGSize { double x0; double x1; })a1 isCropped:(BOOL)a2 version:(long long)a3 isAlwaysFullScreen:(BOOL)a4 formatMode:(long long)a5 thumbnailKind:(long long)a6;
- (struct CGSize { double x0; double x1; })_shortSideFormatScaledSizeForSourceSize:(struct CGSize { double x0; double x1; })a0 capLength:(BOOL)a1;

@end
