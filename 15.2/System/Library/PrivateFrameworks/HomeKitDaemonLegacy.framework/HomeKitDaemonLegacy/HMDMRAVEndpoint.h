@interface HMDMRAVEndpoint : HMFObject

@property (readonly, nonatomic) void *mravEndpoint;

- (id)attributeDescriptions;
- (id)initWithMRAVEndpoint:(void *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end
