@class UIColor, NSArray, UIActivityIndicatorView, NSMutableArray, UIViewController;

@interface EKEventDetailAttendeesListView : UIView {
    long long _statusCounts[4];
    int _firstColumnBType;
    double _maxHeight;
    double _actualHeight;
    NSMutableArray *_inviteeNames;
    BOOL _shouldEvenOutBlocks;
    NSArray *_finalizedNames;
    UIActivityIndicatorView *_spinnerView;
    BOOL _showingSpinner;
}

@property (retain, nonatomic) NSArray *ungrouped;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *highlightedTextColor;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) BOOL groupsNames;
@property (weak, nonatomic) UIViewController *viewController;
@property (nonatomic) double bottomSpacingForSpinner;
@property (readonly, nonatomic) long long columnAItems;
@property (readonly, nonatomic) long long columnBItems;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (double)maxHeight;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setup;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)showSpinner;
- (void)contentSizeCategoryChanged;
- (void)setInvitees:(id)a0 forStatus:(int)a1;
- (BOOL)_haveInviteesToDraw;
- (void)_setShowingSpinner:(BOOL)a0;
- (void)_layoutSpinner;
- (double)calculatedHeight;
- (BOOL)_shouldAlwaysDrawSingleColumn;
- (BOOL)_haveContentToDraw;
- (double)_calculateHeightForSpinnerDisplayMode;
- (double)_calculateHeightForItemCounts:(long long[4])a0;
- (void)_createSpinnerViewIfNeeded;
- (id)generateAttributedStringsFromDisplayParticipants:(id)a0 glyph:(id)a1 displayCount:(long long)a2;
- (void)finalizeInviteNames;
- (void)drawNames:(id)a0;
- (double)maxColumnHeight;
- (void)recalculateHeight;

@end
