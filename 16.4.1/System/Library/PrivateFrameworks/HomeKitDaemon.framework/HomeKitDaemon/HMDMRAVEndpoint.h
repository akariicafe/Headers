@interface HMDMRAVEndpoint : HMFObject

@property (readonly, nonatomic) void *mravEndpoint;

- (id)initWithMRAVEndpoint:(void *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)attributeDescriptions;

@end
