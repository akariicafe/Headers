@interface ICCFTypeWrapper : NSObject

@property (nonatomic) void *cfTypeRef;

- (const void *)ref;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithCFTypeRef:(void *)a0;

@end
