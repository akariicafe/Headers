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

- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (BOOL)shouldShow;
- (void)remoteSourceAvailableDidUpdate:(BOOL)a0;
- (id)initWithConfigurationType:(unsigned long long)a0 delegate:(id)a1 source:(unsigned long long)a2;
- (void)liveLevelMeteringDisplayStateChanged:(BOOL)a0;
- (void)localSourceAvailableDidUpdate:(BOOL)a0;
- (id)soundMeterView;
- (id)soundMeterViewController;
- (void)updateViewsWith:(double)a0 fastLeq:(double)a1 thresholdLevel:(unsigned long long)a2;

@end
