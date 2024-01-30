@class NSString, UIImage;

@interface SGEventSuggestion : SGEventSuggestionBase <EKEventViewDelegate, EKEventEditViewDelegate, EKEventViewDelegatePrivate> {
    UIImage *_calendarImage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)calendarImage;

- (void)eventEditViewController:(id)a0 didCompleteWithAction:(long long)a1;
- (void).cxx_destruct;
- (id)suggestionPrimaryAction;
- (id)suggestionAttributedSubtitle;
- (id)suggestionImage;
- (void)eventViewController:(id)a0 didCompleteWithAction:(long long)a1;
- (BOOL)eventViewControllerShouldAlwaysShowNavBar:(id)a0;
- (void)_dismissViewController:(id)a0 retainBanner:(BOOL)a1;
- (void)preloadPrimaryActionViewController;

@end
