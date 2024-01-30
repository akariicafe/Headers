@class NSString, SBAssistantController;

@interface SBAssistantPresentationObservationToken : SBPresentationObservationToken <SBAssistantObserver>

@property (readonly, nonatomic) SBAssistantController *assistantController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)assistantWillAppear:(id)a0;
- (void)assistantDidDisappear:(id)a0;
- (long long)state;
- (void).cxx_destruct;
- (void)dealloc;
- (void)assistantDidAppear:(id)a0;
- (id)initWithAssistantController:(id)a0;
- (void)assistantWillDisappear:(id)a0;

@end
