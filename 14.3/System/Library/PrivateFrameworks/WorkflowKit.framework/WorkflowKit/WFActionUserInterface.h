@class NSString, WFDialogAttribution;
@protocol WFActionUserInterfaceDelegate, WFUserInterfaceHost;

@interface WFActionUserInterface : NSObject <WFRemoteUserInterface>

@property (readonly, nonatomic) id<WFUserInterfaceHost> userInterfaceHost;
@property (weak, nonatomic) id<WFActionUserInterfaceDelegate> delegate;
@property (readonly, nonatomic) WFDialogAttribution *attribution;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)viewController;
- (id)userInterfaceType;
- (id)initWithUserInterfaceHost:(id)a0;
- (id)initWithUserInterfaceHost:(id)a0 attribution:(id)a1;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)a0;

@end
