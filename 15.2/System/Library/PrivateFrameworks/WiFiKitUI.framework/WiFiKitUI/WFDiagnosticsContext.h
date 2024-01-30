@class NSString, WFDetailsContext, WFNetworkScanRecord, NSDate, WFNetworkProfile, NSNumber;

@interface WFDiagnosticsContext : NSObject <WFDiagnosticsProviderContext>

@property (retain, nonatomic) WFNetworkScanRecord *network;
@property (retain, nonatomic) WFNetworkProfile *profile;
@property (retain, nonatomic) WFDetailsContext *context;
@property (nonatomic) struct __WiFiManagerClient { } *manager;
@property (nonatomic) struct __WiFiDeviceClient { } *device;
@property (copy, nonatomic) id /* block */ refreshHandler;
@property (readonly, nonatomic) NSString *security;
@property (readonly, nonatomic) NSString *securityAdvice;
@property (readonly, nonatomic) NSString *BSSID;
@property (readonly, nonatomic) NSNumber *channel;
@property (readonly, nonatomic) NSString *channelString;
@property (readonly, nonatomic) NSString *channelWidth;
@property (readonly, nonatomic) NSString *channelPerformance;
@property (readonly, nonatomic) NSString *rssi;
@property (readonly, nonatomic) NSString *cca;
@property (readonly, nonatomic) NSString *adviceString;
@property (readonly, nonatomic) NSString *beaconPER;
@property (readonly, nonatomic) NSString *transmitPER;
@property (readonly, nonatomic) NSString *recvFrames;
@property (readonly, nonatomic) NSString *rssiPerformance;
@property (readonly, nonatomic) BOOL captive;
@property (readonly, nonatomic) BOOL managed;
@property (readonly, nonatomic) BOOL multiAP;
@property (readonly, nonatomic) NSString *deployment;
@property (readonly, nonatomic) NSString *motion;
@property (readonly, nonatomic) NSString *gateway;
@property (readonly, nonatomic) NSString *internet;
@property (readonly, nonatomic) NSString *probeFooter;
@property (readonly, nonatomic) NSString *awdl;
@property (readonly, nonatomic) NSString *bluetooth;
@property (readonly, nonatomic) NSString *scan;
@property (readonly, nonatomic) NSString *coexFooter;
@property (nonatomic) double networkQualityResponsiveness;
@property (retain, nonatomic) NSDate *networkQualityDate;
@property (readonly, nonatomic) long long requestedFields;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
