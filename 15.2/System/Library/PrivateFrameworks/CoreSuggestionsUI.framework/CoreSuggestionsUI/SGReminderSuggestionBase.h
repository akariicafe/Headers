@class NSString, SGReminder;
@protocol SGSuggestionDelegate;

@interface SGReminderSuggestionBase : NSObject <SGSuggestion, SGSuggestionCategory, SGSuggestionExtensions> {
    SGReminder *_reminder;
    NSString *_notes;
}

@property (weak, nonatomic) id<SGSuggestionDelegate> suggestionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)url;
- (id)dueDateComponents;
- (id)title;
- (id)userActivity;
- (id)notes;
- (void).cxx_destruct;
- (id)locationString;
- (id)primaryActionTitle;
- (id)location;
- (id)suggestionCategoryTitle;
- (id)suggestionTitle;
- (id)suggestionCategory;
- (id)suggestionPrimaryAction;
- (id)suggestionDismissAction;
- (id)suggestionSubtitle;
- (id)suggestionAttributedSubtitle;
- (long long)suggestionActionButtonType;
- (id)suggestionCategoryId;
- (id)suggestionCategoryImage;
- (id)suggestionCategoryTitleForItems:(id)a0;
- (id)suggestionCategorySubtitleForItems:(id)a0;
- (id)suggestionCategoryLocalizedCountOfItems:(id)a0;
- (BOOL)wantsExtendedDetailOnlyView;
- (long long)locationProximity;
- (id)realtimeSuggestion;
- (id)initWithRealtimeReminder:(id)a0;
- (id)suggestionsSecondTitle;

@end
