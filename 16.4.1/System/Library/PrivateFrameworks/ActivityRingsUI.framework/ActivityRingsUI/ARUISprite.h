@interface ARUISprite : NSObject <NSCopying>

@property (readonly, nonatomic) void /* unknown type, empty encoding */ firstFrameOrigin;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ frameSize;
@property (readonly, nonatomic) unsigned long long frameColumns;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ textureRect;
@property (nonatomic) float size;
@property (nonatomic) void /* unknown type, empty encoding */ translation;
@property (nonatomic) float opacity;
@property (readonly, nonatomic) unsigned long long frameCount;
@property (nonatomic) unsigned long long currentFrameIndex;

+ (id)randomSprite;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithSprite:(id)a0;
- (id)initWithFrameCount:(id)a0 frameColumns:(SEL)a1 firstFrameOrigin:(unsigned long long)a2 frameSize:(unsigned long long)a3;

@end
