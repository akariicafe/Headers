@class NSString, MKMapView, UITapGestureRecognizer, CLPlacemark, MKPinAnnotationView, UIButton, UILabel, CLGeocoder;
@protocol SiriUIMapTemplateViewDelegate, SiriUIMapTemplateModel;

@interface SiriUIMapTemplateView : SiriUIBaseTemplateView <MKMapViewDelegate> {
    MKMapView *_mapView;
    UILabel *_footnoteDescriptorLabel;
    UILabel *_footnoteLabel;
    MKPinAnnotationView *_pinAnnotationView;
    UIButton *_mapButton;
    CLPlacemark *_currentPlacemark;
    CLGeocoder *_geocoder;
    BOOL _needsToNotifyDelegateOfLocationUpdate;
    UITapGestureRecognizer *_tapRecognizer;
}

@property (weak, nonatomic) id<SiriUIMapTemplateViewDelegate> delegate;
@property (weak, nonatomic) id<SiriUIMapTemplateModel> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataSource:(id)a0;
- (void)reloadData;
- (void)layoutSubviews;
- (void)mapView:(id)a0 regionDidChangeAnimated:(BOOL)a1;
- (double)desiredHeight;
- (void).cxx_destruct;
- (void)_handleTapGesture:(id)a0;
- (void)prepareForDismissal;
- (id)_configuredFootnoteDescriptorLabel;
- (id)_configuredFootnoteLabel;
- (void)_mapButtonPressed:(id)a0;
- (void)_notifyDelegateOfLocationUpdateIfNeededWithPlacemark:(id)a0;
- (id)_configuredLabel;

@end
