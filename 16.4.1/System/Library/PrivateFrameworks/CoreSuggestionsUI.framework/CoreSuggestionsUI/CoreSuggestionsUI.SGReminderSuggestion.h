@class NSString, NSUserActivity, NSURL, CLLocation, NSAttributedString, NSDateComponents;

@interface CoreSuggestionsUI.SGReminderSuggestion : NSObject <REMReminderCreationDelegate, SGSuggestionExtensions, SGSuggestion, SGSuggestionCategory> {
    void /* unknown type, empty encoding */ reminder;
    void /* unknown type, empty encoding */ reminderNotes;
    void /* unknown type, empty encoding */ logger;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ suggestionDelegate;
@property (nonatomic, readonly) NSAttributedString *title;
@property (nonatomic, readonly) NSAttributedString *notes;
@property (nonatomic, readonly) NSDateComponents *dueDateComponents;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) NSString *locationString;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSUserActivity *userActivity;
@property (nonatomic, readonly) BOOL wantsExtendedDetailOnlyView;
@property (nonatomic, readonly) long long locationProximity;

- (id)init;
- (void).cxx_destruct;
- (id)suggestionTitle;
- (id)suggestionImage;
- (long long)suggestionActionButtonType;
- (id)suggestionAttributedSubtitle;
- (id)suggestionCategory;
- (long long)suggestionCategoryActionButtonType;
- (id)suggestionCategoryId;
- (id)suggestionCategoryImage;
- (id)suggestionCategoryLocalizedCountOfItems:(id)a0;
- (id)suggestionCategorySubtitleForItems:(id)a0;
- (id)suggestionCategoryTitle;
- (id)suggestionCategoryTitleForItems:(id)a0;
- (id)suggestionDismissAction;
- (id)suggestionPrimaryAction;
- (id)suggestionSubtitle;
- (void)dismissViewController:(id)a0 finished:(BOOL)a1;
- (id)initWithRealtimeReminder:(id)a0;
- (id)realtimeSuggestion;
- (void)reminderCreationViewController:(id)a0 didCreateReminder:(BOOL)a1 error:(id)a2;

@end
