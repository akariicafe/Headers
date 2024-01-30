@class NTKWorldClockHighlightedMapLocationView, NSNumber, NSArray, CLKDevice, NSDate, UIImageView, NSString, NSObject, CLKClockTimerToken, UIColor;
@protocol CLKMonochromeFilterProvider;

@interface NTKSwissWorldClockComplicationGraphicRectangularView : UIView <CLKFullColorImageView>

@property (class, readonly, nonatomic) BOOL tritium_wantsCrossfadeAnimation;

@property (readonly, nonatomic) CLKDevice *device;
@property (readonly, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) CLKClockTimerToken *timeUpdateToken;
@property (retain, nonatomic) NSObject *significantTimeChangeObserver;
@property (retain, nonatomic) UIImageView *mapView;
@property (retain, nonatomic) UIImageView *nightMaskView;
@property (retain, nonatomic) NTKWorldClockHighlightedMapLocationView *highlightedLocationView;
@property (retain, nonatomic) NSArray *locationViews;
@property (retain, nonatomic) NSNumber *cityLatitude;
@property (retain, nonatomic) NSNumber *cityLongitude;
@property (retain, nonatomic) NSArray *cities;
@property (retain, nonatomic) NSDate *overrideDate;
@property (nonatomic, getter=shouldShowIdealizedTime) BOOL showIdealizedTime;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)initFullColorImageViewWithDevice:(id)a0;
- (void)pauseLiveFullColorImageView;
- (void)resumeLiveFullColorImageView;
- (void)configureWithImageProvider:(id)a0 reason:(long long)a1;
- (struct CGPoint { double x0; double x1; })_locationMarkerOffsetForLatitude:(double)a0 longitude:(double)a1;
- (void)_reloadCities;
- (void)_updateNightMaskImage;

@end
