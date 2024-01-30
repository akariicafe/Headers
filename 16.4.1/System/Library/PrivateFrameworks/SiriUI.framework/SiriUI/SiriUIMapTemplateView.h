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

- (void)reloadData;
- (void)layoutSubviews;
- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (void)_handleTapGesture:(id)a0;
- (double)desiredHeight;
- (void)mapView:(id)a0 regionDidChangeAnimated:(BOOL)a1;
- (void)prepareForDismissal;
- (id)_configuredFootnoteDescriptorLabel;
- (id)_configuredFootnoteLabel;
- (id)_configuredLabel;
- (void)_mapButtonPressed:(id)a0;
- (void)_notifyDelegateOfLocationUpdateIfNeededWithPlacemark:(id)a0;

@end
