@class NSMutableSet;

@interface HVContentState : NSObject

@property (readonly, nonatomic) NSMutableSet *consumers;
@property (nonatomic) unsigned char levelOfService;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithConsumers:(id)a0 levelOfService:(unsigned char)a1;

@end
