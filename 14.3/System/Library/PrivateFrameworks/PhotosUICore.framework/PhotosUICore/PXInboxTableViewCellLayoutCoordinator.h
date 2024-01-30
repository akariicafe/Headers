@interface PXInboxTableViewCellLayoutCoordinator : NSObject

@property (class, readonly, nonatomic) double dynamicCellHeight;
@property (class, readonly, nonatomic) double dynamicDistanceFromFirstBaselineToSecondBaseline;

- (void)layoutInCell:(id)a0;
- (void)_layoutSubviewsInCell:(id)a0;
- (void)_toggleShownSubviewsInCell:(id)a0;

@end
