@interface PVStabilizationConfig : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } homography;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cleanAperture;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (nonatomic) int fillMode;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } normalizedCleanAperture;
@property (readonly, nonatomic) BOOL isValid;

+ (id)configWithHomography:(struct { void /* unknown type, empty encoding */ x0[3]; })a0 cleanAperture:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 fillMode:(int)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isValidWithReason:(out id *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithHomography:(struct { void /* unknown type, empty encoding */ x0[3]; })a0 cleanAperture:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 fillMode:(int)a3;

@end
