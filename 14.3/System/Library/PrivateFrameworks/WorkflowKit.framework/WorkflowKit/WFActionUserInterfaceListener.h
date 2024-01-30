@class WFActionUserInterface, NSString;
@protocol WFActionUserInterfaceListenerDelegate;

@interface WFActionUserInterfaceListener : WFSingleConnectionXPCListener <WFActionUserInterfaceDelegate>

@property (weak, nonatomic) id<WFActionUserInterfaceListenerDelegate> delegate;
@property (readonly, nonatomic) WFActionUserInterface *actionInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
