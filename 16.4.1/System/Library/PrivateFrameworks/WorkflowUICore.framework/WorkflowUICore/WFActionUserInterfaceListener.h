@class WFActionUserInterface;

@interface WFActionUserInterfaceListener : WFSingleConnectionXPCListener

@property (readonly, nonatomic) WFActionUserInterface *actionInterface;

- (void).cxx_destruct;
- (id)initWithUserInterfaceType:(id)a0 actionClassName:(id)a1 classNamesByType:(id)a2 attribution:(id)a3;
- (id)initWithUserInterfaceType:(id)a0 actionClassName:(id)a1 classNamesByType:(id)a2;

@end
