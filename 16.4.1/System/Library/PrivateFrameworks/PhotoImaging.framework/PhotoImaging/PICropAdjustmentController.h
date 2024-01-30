@class NSString;

@interface PICropAdjustmentController : PIAdjustmentController

@property (class, readonly, nonatomic) NSString *xOriginKey;
@property (class, readonly, nonatomic) NSString *yOriginKey;
@property (class, readonly, nonatomic) NSString *widthKey;
@property (class, readonly, nonatomic) NSString *heightKey;
@property (class, readonly, nonatomic) NSString *constraintWidthKey;
@property (class, readonly, nonatomic) NSString *constraintHeightKey;
@property (class, readonly, nonatomic) NSString *angleKey;
@property (class, readonly, nonatomic) NSString *pitchKey;
@property (class, readonly, nonatomic) NSString *yawKey;
@property (class, readonly, nonatomic) NSString *smartKey;
@property (class, readonly, nonatomic) NSString *originalCropKey;

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } cropRect;
@property (nonatomic) long long constraintWidth;
@property (nonatomic) long long constraintHeight;
@property (nonatomic) double angle;
@property (nonatomic) double angleRadians;
@property (nonatomic) double pitch;
@property (nonatomic) double pitchRadians;
@property (nonatomic) double yaw;
@property (nonatomic) double yawRadians;
@property (nonatomic) BOOL autoCropped;
@property (nonatomic, getter=isSmart) BOOL smart;
@property (nonatomic, getter=isOriginalCrop) BOOL originalCrop;

- (id)visualInputKeys;
- (BOOL)isGeometryIdentityForImageSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithAdjustment:(id)a0;
- (BOOL)isCropConstrained;
- (BOOL)isCropIdentityForImageSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isSettingEqual:(id)a0 forKey:(id)a1;
- (id)pasteKeysForMediaType:(long long)a0;

@end
