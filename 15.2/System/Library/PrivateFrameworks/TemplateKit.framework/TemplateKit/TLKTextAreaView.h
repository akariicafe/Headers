@class TLKImage, TLKEmbossedLabel, NSMutableArray, TLKLabel, UIView, NSString, TLKRichTextField, TLKTitleContainerView, NUIContainerStackView, NSArray, TLKRichText, TLKTextButton, TLKStackView;
@protocol TLKTextAreaViewDelegate;

@interface TLKTextAreaView : TLKView <NUIContainerViewDelegate, TLKTextAreaViewTesting>

@property (retain, nonatomic) TLKStackView *contentView;
@property (retain, nonatomic) TLKEmbossedLabel *bannerBadgeView;
@property (retain, nonatomic) TLKTitleContainerView *titleContainer;
@property (retain, nonatomic) NUIContainerStackView *detailFieldFootnoteAndAccessoryStackView;
@property (retain, nonatomic) NUIContainerStackView *detailFieldAndFootnoteStackView;
@property (retain, nonatomic) NUIContainerStackView *detailFieldStackView;
@property (retain, nonatomic) NSMutableArray *detailsFields;
@property (retain, nonatomic) NSMutableArray *bulletFields;
@property (retain, nonatomic) TLKLabel *hyphenField;
@property (retain, nonatomic) TLKRichTextField *footnoteLabel;
@property (retain, nonatomic) TLKTextButton *footnoteButton;
@property (retain, nonatomic) NUIContainerStackView *footnoteContainer;
@property (nonatomic) BOOL disableAllObservers;
@property (nonatomic) BOOL isHorizontallyCompressed;
@property (weak) id<TLKTextAreaViewDelegate> buttonDelegate;
@property (retain, nonatomic) TLKRichText *bannerText;
@property (retain, nonatomic) TLKRichText *title;
@property (nonatomic) BOOL truncateTitleMiddle;
@property (retain, nonatomic) TLKRichText *secondaryTitle;
@property (retain, nonatomic) TLKImage *secondaryTitleImage;
@property (nonatomic) BOOL secondaryTitleIsDetached;
@property (retain, nonatomic) NSArray *detailTexts;
@property (retain, nonatomic) TLKRichText *footnote;
@property (retain, nonatomic) NSString *footnoteButtonText;
@property (retain, nonatomic) UIView *accessoryView;
@property (nonatomic) BOOL isAccessoryViewBottomAligned;
@property (nonatomic) BOOL useCompactMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)footNoteLabelFont;

- (id)viewForFirstBaselineLayout;
- (void)performBatchUpdates:(id /* block */)a0;
- (id)viewForLastBaselineLayout;
- (id)titleView;
- (void).cxx_destruct;
- (void)propertiesDidChange;
- (id)setupContentView;
- (id)detailsStrings;
- (id)footnoteLabelString;
- (void)updateBannerBadge;
- (void)updateDetails;
- (void)updateFootnote;
- (void)insertDetailsStackViewIfNeeded;
- (void)updateDetailFieldStackViewVisibility;
- (void)internalTextFieldsInBatchUpdate:(BOOL)a0;
- (id)titleLabelString;
- (id)secondaryTitleLabelString;
- (id)detailsViews;

@end
