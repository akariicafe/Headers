@class NSString, SBAssistantController;

@interface SBAssistantPresentationObservationToken : SBPresentationObservationToken <SBAssistantObserver>

@property (readonly, nonatomic) SBAssistantController *assistantController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)assistantWillAppear:(id)a0 windowScene:(id)a1;
- (long long)state;
- (void)assistantDidDisappear:(id)a0 windowScene:(id)a1;
- (void)assistantWillDisappear:(id)a0 windowScene:(id)a1;
- (void)dealloc;
- (void)assistantDidAppear:(id)a0 windowScene:(id)a1;
- (void).cxx_destruct;
- (id)initWithAssistantController:(id)a0 scene:(id)a1;

@end
