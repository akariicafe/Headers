@class NSString, EMListUnsubscribeCommand, SGSuggestionPresenter;
@protocol SGSuggestion, SGSuggestionDelegate;

@interface EMListUnsubscribeSuggestion : NSObject <SGSuggestion, SGSuggestionCategory>

@property (class, readonly, nonatomic) NSString *suggestionPrimaryActionString;
@property (class, readonly, nonatomic) NSString *unsubscribeTitleAlertString;
@property (class, readonly, nonatomic) NSString *unsubscribeMessageAlertString;
@property (class, readonly, nonatomic) NSString *suggestionDismissActionTitle;

@property (retain, nonatomic) EMListUnsubscribeCommand *listUnsubscribeCommand;
@property (weak, nonatomic) SGSuggestionPresenter *suggestionPresenter;
@property (readonly, nonatomic) id<SGSuggestion> suggestion;
@property (weak, nonatomic) id<SGSuggestionDelegate> suggestionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)ignore;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)unsubscribe;
- (id)suggestionCategoryTitle;
- (id)suggestionTitle;
- (void)_sendAnalyticsForUnsubscribe:(long long)a0;
- (id)suggestionCategory;
- (id)suggestionPrimaryAction;
- (id)suggestionDismissAction;
- (id)suggestionCategoryId;
- (id)suggestionCategoryImage;
- (id)suggestionCategoryTitleForItems:(id)a0;
- (id)suggestionCategorySubtitleForItems:(id)a0;
- (id)suggestionCategoryLocalizedCountOfItems:(id)a0;
- (id /* block */)suggestionComparator;

@end
