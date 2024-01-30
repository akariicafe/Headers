@class MFLoadBlockedContentBannerView, NSString;
@protocol SGSuggestion, SGSuggestionDelegate;

@interface MFLoadBlockedContentSuggestion : NSObject <SGSuggestion>

@property (weak) MFLoadBlockedContentBannerView *blockedContentBanner;
@property (readonly, nonatomic) id<SGSuggestion> suggestion;
@property (weak, nonatomic) id<SGSuggestionDelegate> suggestionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)suggestionTitle;
- (id)suggestionCategory;
- (id)suggestionPrimaryAction;
- (id)initWithBlockedContentBanner:(id)a0;

@end
