@class NSString;
@protocol WFUserInterfaceHost;

@interface WFWebAuthenticationSessionPresentationContext : NSObject <ASWebAuthenticationPresentationContextProviding>

@property (readonly, nonatomic) id<WFUserInterfaceHost> userInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)presentationAnchorForWebAuthenticationSession:(id)a0;
- (id)initWithUserInterface:(id)a0;

@end
