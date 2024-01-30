@interface ABSVCardRecord : NSObject

@property (readonly, nonatomic) void *record;

- (id)initWithRecord:(void *)a0;
- (void)dealloc;
- (id)initWithVCardRepresentation:(id)a0;

@end
