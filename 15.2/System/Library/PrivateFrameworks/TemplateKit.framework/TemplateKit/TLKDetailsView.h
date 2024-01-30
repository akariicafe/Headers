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

- (void)layoutMarginsDidChange;
- (id)viewForFirstBaselineLayout;
- (void)performBatchUpdates:(id /* block */)a0;
- (id)viewForLastBaselineLayout;
- (void).cxx_destruct;
- (id)footnoteLabel;
- (id)footnoteContainer;
- (id)setupContentView;
- (void)footnoteButtonPressed;
- (id)titleContainer;
- (id)detailsFields;
- (id)detailsStrings;
- (id)footnoteLabelString;
- (id)footnoteButton;

@end
