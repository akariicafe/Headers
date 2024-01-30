@interface ABSVCardRecord : NSObject

@property (readonly, nonatomic) void *record;

- (void)dealloc;
- (id)initWithRecord:(void *)a0;
- (id)initWithVCardRepresentation:(id)a0;

@end
