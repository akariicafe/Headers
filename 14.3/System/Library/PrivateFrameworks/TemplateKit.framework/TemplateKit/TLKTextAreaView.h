@class TLKStackView, TLKTitleContainerView, TLKRichTextField, NSArray, TLKImage, NSString, TLKRichText, NUIContainerStackView, TLKLabel, NSMutableArray, TLKEmbossedLabel, TLKTextButton;
@protocol TLKTextAreaViewDelegate;

@interface TLKTextAreaView : TLKView <NUIContainerViewDelegate, TLKTextAreaViewTesting>

@property (retain, nonatomic) TLKStackView *contentView;
@property (retain, nonatomic) TLKEmbossedLabel *bannerBadgeView;
@property (retain, nonatomic) TLKTitleContainerView *titleContainer;
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
@property (nonatomic) BOOL useCompactMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)footNoteLabelFont;

- (void)performBatchUpdates:(id /* block */)a0;
- (id)viewForFirstBaselineLayout;
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
- (void)updateDetailFieldStackViewVisibility;
- (void)internalTextFieldsInBatchUpdate:(BOOL)a0;
- (id)titleLabelString;
- (id)secondaryTitleLabelString;
- (BOOL)noRichTextFields;
- (BOOL)noFootNote;
- (id)detailsViews;

@end
