@interface KenBurnsInfo : NSObject <NSCoding, NSCopying>

@property (nonatomic) BOOL allowEffect;
@property (nonatomic) BOOL effectDisabled;
@property (nonatomic) float outputAspectRatio;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } startFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } endFrame;
@property (nonatomic) struct CGSize { double width; double height; } playbackImageSize;

+ (id)objectFromPlist:(id)a0;
+ (id)defaultKBInfo;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)init;
- (id)plistRepresentation;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })startFrameForRenderingIntent:(int)a0 currentImageSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })endFrameForRenderingIntent:(int)a0 currentImageSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forRenderingIntent:(int)a1 currentImageSize:(struct CGSize { double x0; double x1; })a2;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })transformForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toViewSize:(struct CGSize { double x0; double x1; })a1;
- (id)startRectReferece;
- (id)endRectReferece;
- (id)playbackSizeReferece;
- (BOOL)updateKBInfoForNewPlaybackSize:(struct CGSize { double x0; double x1; })a0;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })startTransformToViewSize:(struct CGSize { double x0; double x1; })a0;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })endTransformToViewSize:(struct CGSize { double x0; double x1; })a0;

@end
