@class NSNumber;
@protocol CNUINavigationListStyle;

@interface CNUINavigationListViewCellHeightEstimator : NSObject

@property (retain, nonatomic) id<CNUINavigationListStyle> navigationListStyle;
@property (retain, nonatomic) NSNumber *estimatedCellHeightNumber;
@property (retain, nonatomic) NSNumber *estimatedDetailCellHeightNumber;
@property (readonly, nonatomic) double estimatedCellHeight;
@property (readonly, nonatomic) double estimatedDetailCellHeight;

- (void).cxx_destruct;
- (id)initWithNavigationListStyle:(id)a0;

@end
