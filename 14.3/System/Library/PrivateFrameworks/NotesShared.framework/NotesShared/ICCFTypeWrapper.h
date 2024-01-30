@interface ICCFTypeWrapper : NSObject

@property (nonatomic) void *cfTypeRef;

- (const void *)ref;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithCFTypeRef:(void *)a0;
- (BOOL)isEqual:(id)a0;

@end
