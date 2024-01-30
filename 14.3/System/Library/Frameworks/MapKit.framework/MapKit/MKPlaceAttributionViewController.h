@class _MKMapItemAttribution, NSArray, NSString, MKPlaceAttributionCell, NSAttributedString, MKMapItem;
@protocol _MKInfoCardAnalyticsDelegate;

@interface MKPlaceAttributionViewController : MKPlaceSectionViewController <MKPlaceAttributionCellDelegate, MKStackingViewControllerFixedHeightAware, MKModuleViewControllerProtocol>

@property (retain, nonatomic) MKPlaceAttributionCell *attributionCell;
@property (retain, nonatomic) MKMapItem *mapItem;
@property (copy, nonatomic) NSAttributedString *attributionString;
@property (retain, nonatomic) _MKMapItemAttribution *attribution;
@property (copy, nonatomic) NSArray *urlStrings;
@property (weak, nonatomic) id<_MKInfoCardAnalyticsDelegate> analyticsDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL resizableViewsDisabled;

- (id)infoAttributionString;
- (void).cxx_destruct;
- (void)openURL;
- (void)loadView;
- (void)infoCardThemeChanged;
- (void)updateLogo;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;

@end
