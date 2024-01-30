@protocol HKGraphSeriesBlockCoordinate;

@interface HKGraphSeriesVisibleBlockCoordinates : NSObject

@property (readonly, nonatomic) id<HKGraphSeriesBlockCoordinate> minimum;
@property (readonly, nonatomic) id<HKGraphSeriesBlockCoordinate> maximum;
@property (readonly, nonatomic) id<HKGraphSeriesBlockCoordinate> last;

- (void).cxx_destruct;
- (id)initWithMinimum:(id)a0 maximum:(id)a1 last:(id)a2;

@end
