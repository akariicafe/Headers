@class NSString, UIImageView, BTSDevice, HPSEngravingService, UIView;

@interface HPSBatteryStatusView : UIView {
    BTSDevice *currentDevice;
    struct { unsigned char battLevelSingle; unsigned char battLevelRight; unsigned char battLevelLeft; unsigned char battLevelCase; unsigned char battLevelCombined; } status;
    NSString *productIdString;
    BOOL untethered;
    BOOL darkMode;
    unsigned char deviceColor;
    UIImageView *deviceImageView;
    UIImageView *caseImageView;
    UIImageView *leftImageView;
    UIImageView *rightImageView;
    HPSEngravingService *engravingService;
    UIView *caseEngravingView;
}

- (void).cxx_destruct;
- (void)setupViews;
- (void)applyFilters:(id)a0 imageView:(id)a1;
- (void)applyFiltersForMode:(BOOL)a0;
- (unsigned char)bestDeviceColor:(unsigned int)a0 productID:(unsigned int)a1;
- (unsigned int)defaultFiltersID;
- (id)getAssetsDictionary:(unsigned int)a0;
- (void)getBatteryStatus;
- (id)getDeviceCaseIcon:(unsigned int)a0;
- (id)getProductIDString;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 device:(id)a1 darkMode:(BOOL)a2;
- (BOOL)isProductOfDifferentColors;

@end
