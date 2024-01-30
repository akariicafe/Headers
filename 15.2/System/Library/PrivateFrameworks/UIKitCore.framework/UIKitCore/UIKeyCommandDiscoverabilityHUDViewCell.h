@class UIKeyCommandDiscoverabilityHUDColumnView, NSArray;

@interface UIKeyCommandDiscoverabilityHUDViewCell : UICollectionViewCell

@property (retain, nonatomic) UIKeyCommandDiscoverabilityHUDColumnView *leftColumnView;
@property (retain, nonatomic) UIKeyCommandDiscoverabilityHUDColumnView *rightColumnView;
@property (retain, nonatomic) NSArray *constraints;
@property (nonatomic) BOOL constraintsForTwoColumns;

- (void).cxx_destruct;

@end
