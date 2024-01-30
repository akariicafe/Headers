@class UIColor, NSString, NSTimer, MKMapView, NSDateFormatter;

@interface MKDebugLocationConsole : UILabel {
    MKMapView *_parentMapView;
    NSTimer *_updateTimer;
    NSString *_customText;
    UIColor *_customTextColor;
    NSDateFormatter *_timeStampFormatter;
}

@property (nonatomic) unsigned long long pageIndex;
@property (nonatomic) BOOL customTextEnabled;

- (id)initWithMapView:(id)a0;
- (void)setText:(id)a0;
- (void)update;
- (void)updateFrameWithEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)_consoleTapped:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_debugViewFrameWithMapView:(id)a0;
- (void)_updateGPSInfo;
- (void)_updateVehicleInfo;
- (void)_updateCustomText;
- (void)_showNextPage;
- (id)timeStampFormatter;
- (void)updateCustomText:(id)a0 textColor:(id)a1;
- (void).cxx_destruct;

@end
