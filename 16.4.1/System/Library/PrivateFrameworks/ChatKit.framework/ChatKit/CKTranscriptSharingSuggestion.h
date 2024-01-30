@class NSString;
@protocol SGSuggestionDelegate, CKTranscriptSharingSuggestionDelegate;

@interface CKTranscriptSharingSuggestion : NSObject <SGSuggestionCategory, SGSuggestion>

@property (weak, nonatomic) id<CKTranscriptSharingSuggestionDelegate> delegate;
@property (readonly, nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SGSuggestionDelegate> suggestionDelegate;

+ (id)bannerWithState:(long long)a0;

- (id)initWithState:(long long)a0;
- (void).cxx_destruct;
- (id)suggestionTitle;
- (BOOL)suggestionProminentActionButton;
- (long long)suggestionActionButtonType;
- (id)suggestionCategory;
- (id)suggestionCategoryId;
- (id)suggestionCategoryImage;
- (id)suggestionCategoryLocalizedCountOfItems:(id)a0;
- (id)suggestionCategorySubtitleForItems:(id)a0;
- (id)suggestionCategoryTitle;
- (id)suggestionCategoryTitleForItems:(id)a0;
- (id)suggestionDismissAction;
- (id)suggestionImageSGView;
- (id)suggestionPrimaryAction;
- (id)suggestionSubtitle;

@end
