@class NSString, NSUserActivity, NSURL, CLLocation, NSAttributedString, NSDateComponents;

@interface SGReminderSuggestion : SGReminderSuggestionBase <REMReminderCreationDelegate>

@property (readonly, nonatomic) NSAttributedString *title;
@property (readonly, nonatomic) NSAttributedString *notes;
@property (readonly, nonatomic) NSDateComponents *dueDateComponents;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) NSString *locationString;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSUserActivity *userActivity;
@property (readonly, nonatomic) BOOL wantsExtendedDetailOnlyView;
@property (readonly, nonatomic) BOOL titleIsGeneratedSuggestion;
@property (readonly, nonatomic) long long locationProximity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)remindersImage;

- (id)suggestionPrimaryAction;
- (id)suggestionImage;
- (id)suggestionCategoryImage;
- (void)reminderCreationViewController:(id)a0 didCreateReminder:(BOOL)a1 error:(id)a2;
- (void)_dismissViewController:(id)a0 andSignalCompletionWithResult:(BOOL)a1;

@end
