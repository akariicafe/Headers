@class MKPlacemark, MKReverseGeocoderInternal;
@protocol MKReverseGeocoderDelegate;

@interface MKReverseGeocoder : NSObject {
    MKReverseGeocoderInternal *_internal;
}

@property (weak, nonatomic) id<MKReverseGeocoderDelegate> delegate;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } coordinate;
@property (readonly, nonatomic) MKPlacemark *placemark;
@property (readonly, nonatomic, getter=isQuerying) BOOL querying;

- (void)cancel;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (void)_notifyResult:(id)a0;
- (void).cxx_destruct;
- (void)setCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (void)_notifyError:(id)a0;
- (void)_notifyNoResults;
- (void)start;

@end
