@interface TSCH3DGLHandle : TSCH3DResourceHandle

@property (readonly, nonatomic) unsigned int value;

+ (id)handleWithGLHandle:(unsigned int)a0;

- (void)setValue:(unsigned int)a0;
- (id)description;
- (void)dealloc;
- (id)initWithGLHandle:(unsigned int)a0;

@end
