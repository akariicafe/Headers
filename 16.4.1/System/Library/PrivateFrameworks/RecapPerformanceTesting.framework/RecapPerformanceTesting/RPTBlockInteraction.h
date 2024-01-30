@interface RPTBlockInteraction : NSObject <RPTInteraction>

@property (copy, nonatomic) id /* block */ actionsComposer;

- (void).cxx_destruct;
- (id)initWithActions:(id /* block */)a0;
- (void)invokeWithComposer:(id)a0 duration:(double)a1;

@end
