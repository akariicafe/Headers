@class NSString;

@interface SGEventSuggestion : SGEventSuggestionBase <EKEventViewDelegate, EKEventEditViewDelegate, EKEventViewDelegatePrivate, SGSuggestionList>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)eventEditViewController:(id)a0 didCompleteWithAction:(long long)a1;
- (BOOL)suggestionListSupportsDismissal;
- (id)suggestionAttributedSubtitle;
- (id)suggestionList;
- (id)suggestionPrimaryAction;
- (void)eventViewController:(id)a0 didCompleteWithAction:(long long)a1;
- (BOOL)eventViewControllerShouldAlwaysShowNavBar:(id)a0;
- (void)_dismissViewController:(id)a0 retainBanner:(BOOL)a1;
- (void)preloadPrimaryActionViewController;

@end
