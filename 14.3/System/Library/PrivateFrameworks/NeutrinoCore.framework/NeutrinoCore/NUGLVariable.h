@interface NUGLVariable : NSObject

@property (readonly) unsigned int type;
@property (readonly) int size;
@property (readonly) int location;
@property (readonly) unsigned int valueType;

- (id)init;
- (unsigned long long)hash;
- (id)initWithType:(unsigned int)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(unsigned int)a0 size:(int)a1;
- (id)initWithType:(unsigned int)a0 size:(int)a1 location:(int)a2;
- (BOOL)isEqualToVariable:(id)a0;

@end
