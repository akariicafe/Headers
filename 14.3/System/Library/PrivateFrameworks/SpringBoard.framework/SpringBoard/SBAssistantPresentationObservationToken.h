@class NSString, SBAssistantController;

@interface SBAssistantPresentationObservationToken : SBPresentationObservationToken <SBAssistantObserver>

@property (readonly, nonatomic) SBAssistantController *assistantController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)assistantDidDisappear:(id)a0;
- (void)assistantWillAppear:(id)a0;
- (void)assistantDidAppear:(id)a0;
- (long long)state;
- (id)initWithAssistantController:(id)a0;
- (void)assistantWillDisappear:(id)a0;

@end
