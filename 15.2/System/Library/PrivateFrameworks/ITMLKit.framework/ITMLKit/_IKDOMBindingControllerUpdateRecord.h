@interface _IKDOMBindingControllerUpdateRecord : NSObject

@property (copy, nonatomic) id /* block */ preUpdate;
@property (copy, nonatomic) id /* block */ update;
@property (nonatomic, getter=isCancelled) BOOL cancelled;

- (void).cxx_destruct;

@end
