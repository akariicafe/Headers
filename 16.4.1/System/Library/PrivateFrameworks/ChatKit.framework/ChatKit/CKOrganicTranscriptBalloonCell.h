@class CKOrganicImageLayoutRecipe;

@interface CKOrganicTranscriptBalloonCell : CKTranscriptBalloonCell

@property (retain, nonatomic) CKOrganicImageLayoutRecipe *layoutRecipe;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (double)layoutOffset;
- (void).cxx_destruct;
- (void)configureForChatItem:(id)a0 context:(id)a1;
- (void)layoutSubviewsForAlignmentContents;

@end
