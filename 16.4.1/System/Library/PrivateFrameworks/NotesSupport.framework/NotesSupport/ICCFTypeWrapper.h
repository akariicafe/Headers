@interface ICCFTypeWrapper : NSObject

@property (nonatomic) void *cfTypeRef;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (const void *)ref;
- (id)initWithCFTypeRef:(void *)a0;

@end
