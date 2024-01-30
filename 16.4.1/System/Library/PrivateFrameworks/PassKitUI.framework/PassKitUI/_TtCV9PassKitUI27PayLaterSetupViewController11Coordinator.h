@interface _TtCV9PassKitUI27PayLaterSetupViewController11Coordinator : NSObject <PKPayLaterSetupFlowControllerDelegate> {
    void /* unknown type, empty encoding */ parent;
    void /* unknown type, empty encoding */ didSelectAction;
    void /* unknown type, empty encoding */ changeFundingModeTabAction;
    void /* unknown type, empty encoding */ didFinishAction;
    void /* unknown type, empty encoding */ controllerContext;
}

- (id)init;
- (void).cxx_destruct;
- (void)payLaterSetupFlowController:(id)a0 didSelect:(id)a1;
- (void)payLaterSetupFlowController:(id)a0 didTerminateApplicationState:(unsigned long long)a1;
- (void)payLaterSetupFlowControllerDidFinish:(id)a0;

@end
