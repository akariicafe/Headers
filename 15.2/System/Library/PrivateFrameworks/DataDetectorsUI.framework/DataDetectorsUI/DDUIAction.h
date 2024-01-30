@class DDAction;

@interface DDUIAction : UIAction

@property (retain, nonatomic) DDAction *dd_action;
@property (copy, nonatomic) id /* block */ dd_handler;

- (void)dd_performAction;
- (void).cxx_destruct;

@end
