@class NSString, SGRealtimeContact;
@protocol SGSuggestionDelegate;

@interface SGContactSuggestionBase : NSObject <SGSuggestion, SGSuggestionCategory, SGSuggestionExtensions> {
    SGRealtimeContact *_realtimeContact;
}

@property (weak, nonatomic) id<SGSuggestionDelegate> suggestionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contactImage;
+ (void)confirm:(BOOL)a0 suggestion:(id)a1 completion:(id /* block */)a2;

- (void).cxx_destruct;
- (id)suggestionTitle;
- (long long)suggestionActionButtonType;
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
- (id)primaryActionTitle;
- (id)ignoreActionButtonTitleForContactSuggestion:(id)a0;
- (id)initWithRealtimeContact:(id)a0;
- (id)mailingAddressFromPostalAddress:(id)a0;
- (id)realtimeSuggestion;
- (struct { id x0; id x1; long long x2; })subtitleAndCategoryFor:(id)a0;
- (id)titleForCategory:(long long)a0;

@end
