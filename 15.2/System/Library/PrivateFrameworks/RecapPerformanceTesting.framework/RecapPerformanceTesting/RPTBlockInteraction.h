@interface RPTBlockInteraction : NSObject <RPTInteraction>

@property (copy, nonatomic) id /* block */ actionsComposer;

- (id)initWithActions:(id /* block */)a0;
- (void).cxx_destruct;
- (void)invokeWithComposer:(id)a0 duration:(double)a1;

@end
