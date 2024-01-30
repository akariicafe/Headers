@class NSString, UIImage;

@interface SGEventSuggestion : SGEventSuggestionBase <EKEventViewDelegate, EKEventEditViewDelegate, EKEventViewDelegatePrivate> {
    UIImage *_calendarImage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)calendarImage;

- (void)eventViewController:(id)a0 didCompleteWithAction:(long long)a1;
- (void).cxx_destruct;
- (BOOL)eventViewControllerShouldAlwaysShowNavBar:(id)a0;
- (id)suggestionPrimaryAction;
- (id)suggestionAttributedSubtitle;
- (id)suggestionImage;
- (void)eventEditViewController:(id)a0 didCompleteWithAction:(long long)a1;
- (void)_dismissViewController:(id)a0 andSignalCompletionWithResult:(BOOL)a1;

@end
