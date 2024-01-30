@interface AXHAMessageHandlerContext : NSObject

@property (readonly, nonatomic) id target;
@property (readonly, nonatomic) id /* block */ block;

- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 block:(id /* block */)a1;

@end
