@class NSString, MFHideMyEmailBannerView;
@protocol SGSuggestion, SGSuggestionDelegate;

@interface MFHideMyEmailSuggestion : NSObject <SGSuggestion>

@property (readonly, nonatomic) id<SGSuggestion> suggestion;
@property (weak) MFHideMyEmailBannerView *hideMyEmailBanner;
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
- (id)initWithHideMyEmailBanner:(id)a0;

@end
