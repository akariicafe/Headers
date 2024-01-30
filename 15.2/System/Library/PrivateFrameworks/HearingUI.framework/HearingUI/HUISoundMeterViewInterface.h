@class NSString, HUISoundMeterListener, HUISoundMeterViewInterfaceInternal;
@protocol HUISoundMeterViewInterfaceDelegate;

@interface HUISoundMeterViewInterface : NSObject <HUISoundMeterListenerDelegate>

@property (retain, nonatomic) HUISoundMeterViewInterfaceInternal *soundMeterViewInterfaceInternal;
@property (retain, nonatomic) HUISoundMeterListener *meteringListener;
@property (weak, nonatomic) id<HUISoundMeterViewInterfaceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldShow;
- (void)start;
- (void).cxx_destruct;
- (void)stop;
- (id)soundMeterViewController;
- (void)localSourceAvailableDidUpdate:(BOOL)a0;
- (void)remoteSourceAvailableDidUpdate:(BOOL)a0;
- (void)liveLevelMeteringDisplayStateChanged:(BOOL)a0;
- (void)updateViewsWith:(double)a0 fastLeq:(double)a1 thresholdLevel:(unsigned long long)a2;
- (id)initWithConfigurationType:(unsigned long long)a0 delegate:(id)a1 source:(unsigned long long)a2;
- (id)soundMeterView;

@end
