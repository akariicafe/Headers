@class TLKTextButton, SFCollectionCardSection, SFResultSection;
@protocol SFFeedbackListener, SearchUITableHeaderCommandDelegate, SearchUITableHeaderViewDelegate;

@interface SearchUITableHeaderViewShared : TLKStackView

@property (weak, nonatomic) id<SearchUITableHeaderViewDelegate> headerViewDelegate;
@property (weak, nonatomic) id<SearchUITableHeaderCommandDelegate> commandDelegate;
@property (weak, nonatomic) id<SFFeedbackListener> feedbackListener;
@property (retain, nonatomic) TLKTextButton *headerOptionButton;
@property (retain, nonatomic) SFResultSection *section;
@property (retain, nonatomic) SFCollectionCardSection *cardSection;
@property BOOL isExpanded;
@property (nonatomic) unsigned long long headerType;

- (void)updateButtonWithAttributedText:(id)a0 image:(id)a1;
- (BOOL)isSuggestedAppsHeader;
- (id)moreResultsPunchout;
- (void)updateWithCollectionCardSection:(id)a0 section:(id)a1 isExpanded:(BOOL)a2;
- (void)moreButtonPressed;
- (id)attributedStringWithSymbolImageName:(id)a0 text:(id)a1;
- (BOOL)supportsShowMoreInApp;
- (void)updateHeaderButtonVisibilityAnimated:(BOOL)a0;
- (void).cxx_destruct;

@end
