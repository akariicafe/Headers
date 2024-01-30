@interface MPMRAVEndpointWrapper : MPCFWrapper

@property (readonly, nonatomic) void *unwrappedValue;

- (id)initWithMRAVEndpoint:(void *)a0;

@end
