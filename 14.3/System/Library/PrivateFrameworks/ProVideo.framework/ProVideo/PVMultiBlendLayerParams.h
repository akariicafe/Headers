@interface PVMultiBlendLayerParams : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int hgBlendMode;
@property (nonatomic) float opacity;
@property (nonatomic) int mode;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithOpacity:(float)a0 mode:(int)a1;
- (void)_sharedInitWithOpacity:(float)a0 mode:(int)a1;
- (id)blendModeName;

@end
