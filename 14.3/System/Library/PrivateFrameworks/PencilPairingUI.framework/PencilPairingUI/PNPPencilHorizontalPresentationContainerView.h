@class PNPDeviceState, PNPPencilView, PNPChargingStatusView, NSString;

@interface PNPPencilHorizontalPresentationContainerView : UIView <PNPChargingStatusViewHosting, PNPDeviceStateConfigurable>

@property (retain, nonatomic) PNPPencilView *pencilView;
@property (retain, nonatomic) PNPChargingStatusView *chargingStatusView;
@property (nonatomic) BOOL showsChargingStatusView;
@property (copy, nonatomic) PNPDeviceState *deviceState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
