@class UIButton, NSAttributedString;

@interface CKTranscriptStatusCell : CKTranscriptLabelCell

@property (copy, nonatomic) NSAttributedString *attributedButtonText;
@property (retain, nonatomic) UIButton *statusButton;
@property (nonatomic) char buttonAlignmentRelativeToContent;
@property (nonatomic) double prevBalloonWidth;
@property (readonly, nonatomic) BOOL shouldHideDuringDarkFSM;
@property (nonatomic) BOOL allowsButtonCharge;

+ (void)transitionFromView:(id)a0 toView:(id)a1 duration:(double)a2 options:(unsigned long long)a3 completion:(id /* block */)a4;
+ (id)statusButton;
+ (void)zoomAnimation:(id /* block */)a0 completion:(id /* block */)a1;

- (void)setOrientation:(char)a0;
- (void)addFilter:(id)a0;
- (void)clearFilters;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)performRemoval:(id /* block */)a0;
- (void)_updateChargeOnStatusButton;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })buttonAlignmentInsets;
- (void)configureForChatItem:(id)a0 context:(id)a1;
- (void)layoutSubviewsForAlignmentContents;
- (void)performInsertion:(id /* block */)a0;
- (void)performReload:(id /* block */)a0 completion:(id /* block */)a1;

@end
