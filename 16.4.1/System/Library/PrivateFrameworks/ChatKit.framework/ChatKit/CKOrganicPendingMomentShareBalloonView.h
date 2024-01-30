@class CKOrganicImageLayoutRecipe;

@interface CKOrganicPendingMomentShareBalloonView : CKPendingMomentShareBalloonView

@property (retain, nonatomic) CKOrganicImageLayoutRecipe *layoutRecipe;

- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void).cxx_destruct;

@end
