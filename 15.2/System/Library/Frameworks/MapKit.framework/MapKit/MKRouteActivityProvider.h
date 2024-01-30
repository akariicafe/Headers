@class MKMapItem;

@interface MKRouteActivityProvider : MKPlaceActivityProvider

@property (retain, nonatomic) MKMapItem *destinationMapItem;
@property (retain, nonatomic) MKMapItem *sourceMapItem;
@property (nonatomic) unsigned long long transportType;

- (id)activityURL;
- (id)activitySourceTitle;
- (void).cxx_destruct;
- (id)initWithSource:(id)a0 destination:(id)a1;

@end
