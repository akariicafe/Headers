@interface SiriUIDeviceInfo : NSObject

@property (readonly, nonatomic, getter=isDeviceZoomed) BOOL deviceZoomed;
@property (readonly, nonatomic, getter=isLargeFormatPhone) BOOL largeFormatPhone;
@property (readonly, nonatomic) BOOL deviceShouldUseFrozenBackdropSnapshot;
@property (readonly, nonatomic) BOOL deviceShouldFreezeAura;
@property (readonly, nonatomic) BOOL deviceShouldDeferFlamesView;
@property (readonly, nonatomic) BOOL deviceShouldSkipGuidePreloading;
@property (readonly, nonatomic) BOOL deviceSupportsProximitySensor;

+ (id)sharedInstance;

- (id)initWithLargeFormatPhone:(BOOL)a0 gestaltModes:(id)a1 screenSize:(struct CGSize { double x0; double x1; })a2;
- (void)_updateProductTypeDerivedProperties;

@end
