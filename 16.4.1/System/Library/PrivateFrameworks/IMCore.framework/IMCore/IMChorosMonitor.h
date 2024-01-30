@class CTStewieStateMonitor, CoreTelephonyClient, NSString;

@interface IMChorosMonitor : NSObject <CTStewieStateMonitorDelegate>

@property (retain, nonatomic) CTStewieStateMonitor *coreTelephonyStewieMonitor;
@property (retain, nonatomic) CoreTelephonyClient *telephonyClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)isStewieActive;
- (void)stateChanged:(id)a0;
- (id)getState;
- (id)init;
- (void).cxx_destruct;
- (void)openStewieAppWithCompletion:(id /* block */)a0;
- (void)placeEmergencyCallWithCompletion:(id /* block */)a0;
- (BOOL)shouldShowTextEmergencyServicesButton;
- (BOOL)_activeServicesHasEmergency:(id)a0;

@end
