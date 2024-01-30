@class NSString;

@interface MTLNamedConstantValue : NSObject

@property (readonly) NSString *name;
@property (readonly) unsigned long long dataType;
@property (readonly) char *data;

- (id)formattedDescription:(unsigned long long)a0;
- (void)dealloc;
- (id)description;
- (id)initWithValue:(const void *)a0 type:(unsigned long long)a1 name:(id)a2;
- (id)describe;

@end
