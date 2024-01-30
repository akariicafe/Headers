@class MKMapItem;
@protocol MKPlaceActivityProviderDelegate;

@interface MKPlaceActivityProvider : NSObject

@property (weak, nonatomic) id<MKPlaceActivityProviderDelegate> delegate;
@property (retain, nonatomic) MKMapItem *mapItem;

- (id)initWithMapItem:(id)a0;
- (id)activityURL;
- (id)activityAnnotationView;
- (id)mapMetadataSpecialization;
- (void).cxx_destruct;
- (id)activityTitle;

@end
