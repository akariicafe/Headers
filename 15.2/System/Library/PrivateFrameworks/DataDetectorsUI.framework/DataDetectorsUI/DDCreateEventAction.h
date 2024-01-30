@class NSString;

@interface DDCreateEventAction : DDAddEventAction <EKEventEditViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)localizedName;
- (void)eventEditViewController:(id)a0 didCompleteWithAction:(long long)a1;
- (void)prepareViewControllerForActionController:(id)a0;

@end
