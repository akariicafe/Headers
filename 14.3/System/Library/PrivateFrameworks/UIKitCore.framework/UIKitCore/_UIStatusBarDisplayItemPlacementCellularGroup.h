@class _UIStatusBarDisplayItemPlacement, NSArray;

@interface _UIStatusBarDisplayItemPlacementCellularGroup : _UIStatusBarDisplayItemPlacementGroup

@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *signalStrengthPlacement;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *warningPlacement;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *typePlacement;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *namePlacement;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *callForwardingPlacement;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *badgePlacement;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *rawPlacement;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *dualSignalStrengthPlacement;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *dualNamePlacement;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *dualNameAndTypePlacement;
@property (retain, nonatomic) NSArray *placementsAffectedByAirplaneMode;

- (void).cxx_destruct;

@end
