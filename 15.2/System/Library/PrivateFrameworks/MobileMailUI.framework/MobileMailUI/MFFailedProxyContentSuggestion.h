@class NSString, MFLoadFailedProxyContentBannerView;
@protocol SGSuggestion, SGSuggestionDelegate;

@interface MFFailedProxyContentSuggestion : NSObject <SGSuggestion>

@property (weak) MFLoadFailedProxyContentBannerView *failedProxyContentBanner;
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
- (id)suggestionDismissAction;
- (id)initWithFailedProxyContentBanner:(id)a0;

@end
