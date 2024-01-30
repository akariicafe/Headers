@class WFWebSheetViewController, NSTimer, NSString;
@protocol WFNetworkListRecord;

@interface WFCaptiveContext : NSObject <WFWebSheetViewControllerDelegate, WFProviderContext>

@property (retain, nonatomic) WFWebSheetViewController *webSheetViewController;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL readyForPresentation;
@property (copy, nonatomic) id /* block */ readyForPresentationHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<WFNetworkListRecord> network;
@property (readonly, nonatomic) long long requestedFields;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)_presentationTimerFired:(id)a0;
- (void)_readyForPresentation:(id)a0;
- (void)webSheetViewController:(id)a0 didTerminateWithError:(id)a1;
- (void)webSheetViewControllerContentReadyForPresentation:(id)a0;

@end
