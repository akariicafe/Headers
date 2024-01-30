@class NSString, WFAction;

@interface WFModuleHeadingActivityView : UIActivityIndicatorView <WFActionEventObserver>

@property (weak, nonatomic) WFAction *action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)actionRunningStateDidChange:(id)a0;

@end
