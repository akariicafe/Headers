@interface MTLIndexedConstantValue : NSObject

@property (readonly) unsigned long long index;
@property (readonly) unsigned long long dataType;
@property (readonly) char *data;

- (id)formattedDescription:(unsigned long long)a0;
- (void)dealloc;
- (id)description;
- (id)initWithValue:(const void *)a0 type:(unsigned long long)a1 index:(unsigned long long)a2;
- (id)describe;

@end
