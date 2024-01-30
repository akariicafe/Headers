@class NSNumber;
@protocol CNUINavigationListStyle;

@interface CNUINavigationListViewCellHeightEstimator : NSObject

@property (retain, nonatomic) id<CNUINavigationListStyle> navigationListStyle;
@property (retain, nonatomic) NSNumber *estimatedCellHeightNumber;
@property (retain, nonatomic) NSNumber *estimatedDetailCellHeightNumber;
@property (readonly, nonatomic) double estimatedCellHeight;
@property (readonly, nonatomic) double estimatedDetailCellHeight;

- (id)initWithNavigationListStyle:(id)a0;
- (void).cxx_destruct;

@end
