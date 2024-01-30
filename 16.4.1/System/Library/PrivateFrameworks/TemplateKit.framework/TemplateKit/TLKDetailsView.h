@class UIView, NSArray, NSString, TLKImage, TLKTextAreaView, TLKRichText;
@protocol TLKDetailsViewDelegate;

@interface TLKDetailsView : TLKView <TLKTextAreaViewDelegate>

@property (retain, nonatomic) TLKTextAreaView *contentView;
@property (nonatomic) BOOL useCompactMode;
@property (retain, nonatomic) TLKRichText *bannerBadge;
@property (retain, nonatomic) TLKRichText *title;
@property (nonatomic) BOOL truncateTitleMiddle;
@property (weak, nonatomic) id<TLKDetailsViewDelegate> delegate;
@property (retain, nonatomic) TLKRichText *secondaryTitle;
@property (nonatomic) BOOL secondaryTitleIsDetached;
@property (retain, nonatomic) TLKImage *secondaryTitleImage;
@property (retain, nonatomic) NSArray *details;
@property (retain, nonatomic) TLKRichText *footnote;
@property (retain, nonatomic) NSString *footnoteButtonText;
@property (retain, nonatomic) UIView *accessoryView;
@property (nonatomic) BOOL isAccessoryViewBottomAligned;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performBatchUpdates:(id /* block */)a0;
- (void)layoutMarginsDidChange;
- (id)viewForLastBaselineLayout;
- (id)footnoteLabel;
- (id)viewForFirstBaselineLayout;
- (id)footnoteContainer;
- (void).cxx_destruct;
- (BOOL)configureMenuForFootnoteButton:(id)a0;
- (id)detailsFields;
- (id)detailsStrings;
- (id)footnoteButton;
- (void)footnoteButtonPressed;
- (id)footnoteLabelString;
- (id)setupContentView;
- (id)titleContainer;

@end
