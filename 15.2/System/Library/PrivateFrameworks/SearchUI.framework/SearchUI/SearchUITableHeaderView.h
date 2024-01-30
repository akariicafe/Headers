@class NSString, SearchUILabel, TLKTextButton, SFResultSection, SFCollectionCardSection;
@protocol SFFeedbackListener, SearchUITableHeaderCommandDelegate, SearchUITableHeaderViewDelegate;

@interface SearchUITableHeaderView : TLKStackView <NUIContainerViewDelegate>

@property (retain, nonatomic) SearchUILabel *titleLabel;
@property (retain, nonatomic) TLKTextButton *headerOptionButton;
@property (retain, nonatomic) SFResultSection *section;
@property (nonatomic) unsigned long long headerType;
@property (nonatomic) BOOL isExpanded;
@property (retain, nonatomic) SFCollectionCardSection *cardSection;
@property (weak, nonatomic) id<SearchUITableHeaderViewDelegate> headerViewDelegate;
@property (weak, nonatomic) id<SearchUITableHeaderCommandDelegate> commandDelegate;
@property (weak, nonatomic) id<SFFeedbackListener> feedbackListener;
@property (readonly) NSString *title;
@property (nonatomic) BOOL shouldUseInsetRoundedSections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;

- (void)layoutSubviews;
- (BOOL)isSuggestedAppsHeader;
- (void)updateButtonWithAttributedText:(id)a0 image:(id)a1;
- (void)updateWithCollectionCardSection:(id)a0 section:(id)a1 usesInsetRoundedSection:(BOOL)a2;
- (id)attributedStringWithSymbolImageName:(id)a0 text:(id)a1;
- (id)moreResultsPunchout;
- (BOOL)supportsShowMoreInApp;
- (void).cxx_destruct;
- (id)init;
- (void)updateWithSection:(id)a0 isExpanded:(BOOL)a1 usesInsetRoundedSection:(BOOL)a2;
- (void)updateHeaderButtonVisibilityAnimated:(BOOL)a0;
- (void)moreButtonPressed;

@end
