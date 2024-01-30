@interface PathObject : NSObject

@property (readonly) char *path;
@property (readonly) int len;

+ (id)pathObjectWithPath:(const char *)a0 component:(const char *)a1;

- (id)description;
- (void)dealloc;
- (id)initWithPath:(const char *)a0 component:(const char *)a1;

@end
