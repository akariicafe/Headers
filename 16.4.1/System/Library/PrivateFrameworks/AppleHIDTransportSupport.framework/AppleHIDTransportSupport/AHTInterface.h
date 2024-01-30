@interface AHTInterface : AHTCommon

@property (readonly, nonatomic) unsigned char interfaceID;

+ (id)allInterfaces;
+ (id)withService:(unsigned int)a0;

- (id)initWithService:(unsigned int)a0;
- (BOOL)setPower:(long long)a0;
- (BOOL)setEnable:(BOOL)a0;
- (id)description;
- (BOOL)reset;
- (BOOL)getPower:(long long *)a0;
- (BOOL)getReport:(unsigned char)a0 withData:(id)a1;
- (BOOL)setReport:(unsigned char)a0 withData:(id)a1;

@end
