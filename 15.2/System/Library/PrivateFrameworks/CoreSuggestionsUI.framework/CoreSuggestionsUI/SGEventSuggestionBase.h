@class NSString, SGRealtimeEvent, EKEvent;
@protocol SGSuggestionDelegate;

@interface SGEventSuggestionBase : NSObject <SGSuggestion, SGSuggestionCategory, SGSuggestionExtensions> {
    SGRealtimeEvent *_realtimeEvent;
    EKEvent *_eventKitEvent;
}

@property (weak, nonatomic) id<SGSuggestionDelegate> suggestionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_eventStore;
+ (id)calendarImage;
+ (void)confirm:(BOOL)a0 event:(id)a1 completion:(id /* block */)a2;

- (void).cxx_destruct;
- (void)dealloc;
- (id)primaryActionTitle;
- (id)suggestionCategoryTitle;
- (id)suggestionTitle;
- (id)suggestionCategory;
- (id)suggestionPrimaryAction;
- (id)suggestionDismissAction;
- (id)suggestionSubtitle;
- (long long)suggestionActionButtonType;
- (id)suggestionCategoryId;
- (id)suggestionCategoryImage;
- (id)suggestionCategoryTitleForItems:(id)a0;
- (id)suggestionCategorySubtitleForItems:(id)a0;
- (id)suggestionCategoryLocalizedCountOfItems:(id)a0;
- (id)realtimeSuggestion;
- (void)preloadPrimaryActionViewController;
- (id)initWithRealtimeEvent:(id)a0;
- (id)suggestionsEvent;
- (void)eventKitStoreChangedNotification:(id)a0;
- (id)eventKitEvent;

@end
