@class MKMapItem;
@protocol MKPlaceActivityProviderDelegate;

@interface MKPlaceActivityProvider : NSObject

@property (weak, nonatomic) id<MKPlaceActivityProviderDelegate> delegate;
@property (retain, nonatomic) MKMapItem *mapItem;

- (void).cxx_destruct;
- (id)activityTitle;
- (id)initWithMapItem:(id)a0;
- (id)activityURL;
- (BOOL)shouldUseWebPlaceCardForActivityType:(id)a0;
- (id)webPlaceCardURL;
- (id)activityAnnotationView;
- (id)mapMetadataSpecialization;

@end
