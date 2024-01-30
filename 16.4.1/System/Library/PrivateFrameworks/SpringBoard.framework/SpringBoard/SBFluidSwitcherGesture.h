@class UIGestureRecognizer, NSString, SBAppLayout;

@interface SBFluidSwitcherGesture : NSObject <BSDescriptionProviding> {
    id /* block */ _eventProvider;
}

@property (nonatomic, setter=_setState:) long long state;
@property (retain, nonatomic, setter=_setSelectedAppLayout:) SBAppLayout *selectedAppLayout;
@property (nonatomic, setter=_setSelectedLayoutRole:) long long selectedLayoutRole;
@property (retain, nonatomic, setter=_setGestureRecognizerForStudyLog:) UIGestureRecognizer *gestureRecognizerForStudyLog;
@property (readonly, nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)gestureEvent;
- (id)initWithType:(long long)a0 eventProvider:(id /* block */)a1;
- (id)studyLogData;

@end
