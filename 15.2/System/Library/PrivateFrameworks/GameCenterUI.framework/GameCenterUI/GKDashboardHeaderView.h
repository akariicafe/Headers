@class UISegmentedControl, GKGameRecord;

@interface GKDashboardHeaderView : UICollectionReusableView

@property (nonatomic) UISegmentedControl *segmentedControl;
@property (nonatomic) BOOL didSetupLikeButton;
@property (retain, nonatomic) GKGameRecord *gameRecord;

+ (double)defaultHeight;

- (void)awakeFromNib;
- (void).cxx_destruct;

@end
