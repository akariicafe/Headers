@interface ABSVCardRecord : NSObject

@property (readonly, nonatomic) void *record;

- (id)initWithRecord:(void *)a0;
- (id)initWithVCardRepresentation:(id)a0;
- (void)dealloc;

@end
