@interface HMDMRAVEndpoint : HMFObject

@property (readonly, nonatomic) void *mravEndpoint;

- (id)initWithMRAVEndpoint:(void *)a0;
- (void)dealloc;
- (id)attributeDescriptions;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
