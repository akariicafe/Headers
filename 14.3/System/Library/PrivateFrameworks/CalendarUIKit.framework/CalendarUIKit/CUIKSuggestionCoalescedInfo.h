@class NSString, EKCalendarSuggestionNotification;

@interface CUIKSuggestionCoalescedInfo : NSObject

@property (readonly) NSString *title;
@property (readonly) NSString *descriptionText;
@property (readonly) EKCalendarSuggestionNotification *earliestSuggestionNotification;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 descriptionText:(id)a1 earliestSuggestionNotification:(id)a2;

@end
