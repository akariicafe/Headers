@class NSDate, NSString, NSArray, UISlider, UISwitch, UITextView, PXTimelineEntry, UIImageView, NSMutableDictionary, UILabel;

@interface PXSettingsTimelineInspectorViewController : UIViewController <UINavigationControllerDelegate, PXDiagnosticsEnvironment>

@property (retain, nonatomic) NSDate *currentTime;
@property (retain, nonatomic) NSArray *timeline;
@property (retain, nonatomic) NSArray *filteredContent;
@property (retain, nonatomic) PXTimelineEntry *entryInDisplay;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UITextView *entryInfoTextView;
@property (retain, nonatomic) UILabel *sliderValueLabel;
@property (retain, nonatomic) UISlider *timeSlider;
@property (retain, nonatomic) UILabel *showFilteredContentLabel;
@property (retain, nonatomic) UISwitch *showFilteredContentSwitch;
@property (nonatomic) BOOL showFilteredContent;
@property (nonatomic) struct CGSize { double width; double height; } widgetSize;
@property (retain, nonatomic) NSMutableDictionary *assetByAssetLocalIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)sliderValueChanged:(id)a0;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)a0;
- (id)initWithWidgetSize:(struct CGSize { double x0; double x1; })a0;
- (id)filteredContentInPhotoLibrary:(id)a0;
- (void)displayTimelineEntry:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })strokeRectFromCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 originalImageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 targetImageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)displaySliderTime:(id)a0;
- (void)displayFilteredContentIndex:(unsigned long long)a0;
- (void)switchValueChanged:(id)a0;
- (void)handleTap:(id)a0;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint { double x0; double x1; })a0 inCoordinateSpace:(id)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
