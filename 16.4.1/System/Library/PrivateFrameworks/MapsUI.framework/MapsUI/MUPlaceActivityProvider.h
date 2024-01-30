@class MKMapItem;
@protocol MUPlaceActivityProviderDelegate;

@interface MUPlaceActivityProvider : NSObject

@property (weak, nonatomic) id<MUPlaceActivityProviderDelegate> delegate;
@property (retain, nonatomic) MKMapItem *mapItem;

- (id)activityTitle;
- (id)initWithMapItem:(id)a0;
- (void).cxx_destruct;
- (id)activityAnnotationView;
- (id)activityURL;
- (id)mapMetadataSpecialization;

@end
