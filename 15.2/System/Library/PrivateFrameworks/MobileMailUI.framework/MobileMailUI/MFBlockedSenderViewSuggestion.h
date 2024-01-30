@class NSString, MFBlockedSenderBannerView;
@protocol SGSuggestion, SGSuggestionDelegate;

@interface MFBlockedSenderViewSuggestion : NSObject <SGSuggestion>

@property (weak) MFBlockedSenderBannerView *blockedSenderView;
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
- (id)initWithBlockedSenderView:(id)a0;

@end
