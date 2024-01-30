@class CKOrganicImageLayoutRecipe;

@interface CKOrganicTranscriptBalloonCell : CKTranscriptBalloonCell

@property (retain, nonatomic) CKOrganicImageLayoutRecipe *layoutRecipe;

- (void)layoutSubviewsForAlignmentContents;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (double)layoutOffset;
- (void)configureForChatItem:(id)a0 context:(id)a1;
- (void).cxx_destruct;

@end
