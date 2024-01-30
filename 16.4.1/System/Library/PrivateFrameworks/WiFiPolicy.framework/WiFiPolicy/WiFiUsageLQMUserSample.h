@class NSString, WiFiUsageInterfaceCapabilities, WiFiUsageNetworkDetails, NSDate;

@interface WiFiUsageLQMUserSample : WiFiUsageLQMSample

@property (copy, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) NSString *interfaceName;
@property (retain, nonatomic) WiFiUsageInterfaceCapabilities *capabilities;
@property (retain, nonatomic) WiFiUsageNetworkDetails *networkDetails;
@property (retain, nonatomic) NSString *fgApp;
@property (retain, nonatomic) NSString *motionState;
@property (nonatomic) BOOL isAnyAppInFG;
@property (nonatomic) BOOL isFTactive;
@property (nonatomic) BOOL isTimeSensitiveAppRunning;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) long long rssi;
@property (nonatomic) long long rssi_core0;
@property (nonatomic) long long rssi_core1;
@property (nonatomic) long long diff_rssi_core0;
@property (nonatomic) long long diff_rssi_core1;
@property (nonatomic) unsigned long long perCoreRssiInUse;
@property (nonatomic) long long noise;
@property (nonatomic) long long snr;
@property (nonatomic) unsigned long long selfCca;
@property (nonatomic) unsigned long long otherCca;
@property (nonatomic) unsigned long long interference;
@property (nonatomic) unsigned long long totalReportedCca;
@property (nonatomic) unsigned long long beaconPer;
@property (nonatomic) unsigned long long decodingAttempts;
@property (nonatomic) unsigned long long rxStartOverDecodingAttemptsPercentage;
@property (nonatomic) unsigned long long rxCrsGlitchOverDecodingAttemptsPercentage;
@property (nonatomic) unsigned long long rxBadPlcpOverDecodingAttemptsPercentage;
@property (nonatomic) unsigned long long txFrames;
@property (nonatomic) unsigned long long rxFrames;
@property (nonatomic) unsigned long long txFailsOverTxFrames;
@property (nonatomic) unsigned long long txRetriesOverTxFrames;
@property (nonatomic) unsigned long long rxRetriesOverRxFrames;
@property (nonatomic) unsigned long long txBytesOverTxFrames;
@property (nonatomic) unsigned long long rxBytesOverRxFrames;
@property (nonatomic) unsigned long long txL3Packets;
@property (nonatomic) unsigned long long rxL3Packets;
@property (nonatomic) unsigned long long txBytesOverTxL3Packets;
@property (nonatomic) unsigned long long rxBytesOverRxL3Packets;
@property (nonatomic) unsigned long long linkTheoreticalMaxRate;
@property (nonatomic) unsigned long long txRateOverLinkTheoreticalMaxPercentage;
@property (nonatomic) unsigned long long rxRateOverLinkTheoreticalMaxPercentage;
@property (nonatomic) unsigned long long txRateOverDeviceTheoreticalMaxPercentage;
@property (nonatomic) unsigned long long rxRateOverDeviceTheoreticalMaxPercentage;
@property (nonatomic) unsigned long long txRTS;
@property (nonatomic) unsigned long long txRTSFailOvertxRTS;
@property (nonatomic) unsigned long long txMpduDensity;
@property (nonatomic) unsigned long long chanQualScore;
@property (nonatomic) unsigned long long txLatencyScore;
@property (nonatomic) unsigned long long rxLatencyScore;
@property (nonatomic) unsigned long long txLossScore;
@property (nonatomic) unsigned long long rxLossScore;
@property (nonatomic) unsigned long long txLatencyP95;
@property (nonatomic) unsigned long long roamRecommended;
@property (nonatomic) unsigned long long tdRecommended;
@property (nonatomic) unsigned long long trafficState;

+ (id)allLQMProperties;
+ (id)featureFromFieldName:(id)a0;

- (id)initWithInterfaceName:(id)a0;
- (void)updateWithChQualScore:(unsigned long long)a0 txLatencyScore:(unsigned long long)a1 rxLatencyScore:(unsigned long long)a2 txLossScore:(unsigned long long)a3 rxLossScore:(unsigned long long)a4 txLatencyP95:(unsigned long long)a5 linkRecommendationFlags:(unsigned long long)a6 rtTrafficStatus:(unsigned long long)a7;
- (void)populateWithTxFrames:(unsigned long long)a0 RxFrames:(unsigned long long)a1 TxFails:(unsigned long long)a2 TxRetries:(unsigned long long)a3 RxRetries:(unsigned long long)a4 TxRate:(unsigned long long)a5 RxRate:(unsigned long long)a6 txRTS:(unsigned long long)a7 txRTSFail:(unsigned long long)a8 txMpdu:(unsigned long long)a9 txAMPDU:(unsigned long long)a10;
- (void)populateWithRssi:(long long)a0 rssi0:(long long)a1 rssi1:(long long)a2 rssiMode:(unsigned long long)a3 noise:(long long)a4 snr:(long long)a5 selfCca:(unsigned long long)a6 otherCca:(unsigned long long)a7 interference:(unsigned long long)a8 totalReportedCca:(unsigned long long)a9 beaconPer:(unsigned long long)a10 rxCrsGlitch:(unsigned long long)a11 rxBadPLCP:(unsigned long long)a12 rxStart:(unsigned long long)a13 rxBphyCrsGlitch:(unsigned long long)a14 rxBphyBadPLCP:(unsigned long long)a15 sampleDuration:(unsigned long long)a16;
- (unsigned long long)rxRate;
- (void)updateWithInterfaceCapabilities:(id)a0 AndNetworkDetails:(id)a1;
- (void)populateWithMotionState:(id)a0 andAppState:(struct { unsigned char x0; unsigned char x1; unsigned char x2; })a1;
- (long long)rssiForTD;
- (id)description;
- (unsigned long long)txRate;
- (void).cxx_destruct;
- (void)populateWithRssi:(long long)a0 noise:(long long)a1 snr:(long long)a2 selfCca:(unsigned long long)a3 otherCca:(unsigned long long)a4 interference:(unsigned long long)a5 totalReportedCca:(unsigned long long)a6 beaconPer:(unsigned long long)a7 rxCrsGlitch:(unsigned long long)a8 rxBadPLCP:(unsigned long long)a9 rxStart:(unsigned long long)a10 sampleDuration:(unsigned long long)a11;
- (void)updateWithTxBytes:(unsigned long long)a0 RxBytes:(unsigned long long)a1 TxL3Packets:(unsigned long long)a2 RxL3Packets:(unsigned long long)a3;

@end
