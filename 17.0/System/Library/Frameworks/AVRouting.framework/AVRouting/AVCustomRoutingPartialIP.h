@class NSData;

@interface AVCustomRoutingPartialIP : NSObject

@property (readonly, copy, nonatomic) NSData *address;
@property (readonly, copy, nonatomic) NSData *mask;

- (void)dealloc;
- (id)initWithAddress:(id)a0 mask:(id)a1;

@end
