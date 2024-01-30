@interface AudioTier : NSObject <NSCopying>

@property unsigned int mode;
@property unsigned int tier;
@property unsigned int duplication;
@property unsigned int bundling;
@property unsigned int codecPayload;
@property unsigned int codecBitrate;
@property double duration;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMode:(unsigned int)a0 tier:(unsigned int)a1 duplication:(unsigned int)a2 bundling:(unsigned int)a3 codecPayload:(unsigned int)a4 codecBitrate:(unsigned int)a5;

@end
