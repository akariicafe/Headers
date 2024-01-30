@class NSString;

@interface JPFileEntry : NSObject

@property (nonatomic) void *backing;
@property (readonly, nonatomic) BOOL releaseBackingOnDealloc;
@property (readonly, nonatomic) NSString *pathname;

- (BOOL)writeStream:(id)a0 toDirectory:(id)a1 error:(id *)a2;
- (id)initWithBacking:(void *)a0 releaseOnDealloc:(BOOL)a1;

@end
