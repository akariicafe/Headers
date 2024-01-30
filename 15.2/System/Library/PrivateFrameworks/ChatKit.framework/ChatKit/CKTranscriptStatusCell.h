@class UIButton, NSAttributedString;

@interface CKTranscriptStatusCell : CKTranscriptLabelCell

@property (copy, nonatomic) NSAttributedString *attributedButtonText;
@property (retain, nonatomic) UIButton *statusButton;
@property (nonatomic) char buttonAlignmentRelativeToContent;
@property (nonatomic) double prevBalloonWidth;
@property (readonly, nonatomic) BOOL shouldHideDuringDarkFSM;

+ (void)transitionFromView:(id)a0 toView:(id)a1 duration:(double)a2 options:(unsigned long long)a3 completion:(id /* block */)a4;
+ (void)zoomAnimation:(id /* block */)a0 completion:(id /* block */)a1;
+ (id)statusButton;

- (void)layoutSubviewsForAlignmentContents;
- (void)performInsertion:(id /* block */)a0;
- (void)configureForChatItem:(id)a0 context:(id)a1;
- (void)addFilter:(id)a0;
- (void).cxx_destruct;
- (void)setOrientation:(char)a0;
- (void)prepareForReuse;
- (void)performReload:(id /* block */)a0 completion:(id /* block */)a1;
- (void)performRemoval:(id /* block */)a0;
- (void)clearFilters;

@end
