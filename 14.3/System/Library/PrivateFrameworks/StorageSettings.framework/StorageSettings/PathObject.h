@interface PathObject : NSObject

@property (readonly) char *path;
@property (readonly) int len;

+ (id)pathObjectWithPath:(const char *)a0 component:(const char *)a1;

- (void)dealloc;
- (id)description;
- (id)initWithPath:(const char *)a0 component:(const char *)a1;

@end
