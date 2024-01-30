@class NSString, WiFiUsageInterfaceCapabilities, WiFiUsageNetworkDetails, NSDate;

@interface WiFiUsageLQMUserSample : WiFiUsageLQMSample

@property (copy, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) NSString *interfaceName;
@property (retain, nonatomic) WiFiUsageInterfaceCapabilities *capabilities;
@property (retain, nonatomic) WiFiUsageNetworkDetails *networkDetails;
@property (retain, nonatomic) NSString *fgApp;
@property (retain, nonatomic) NSString *motionState;
@property (nonatomic) double duration;
@property (nonatomic) long long rssi;
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

+ (id)allLQMProperties;

- (id)initWithInterfaceName:(id)a0;
- (void)updateWithTxBytes:(unsigned long long)a0 RxBytes:(unsigned long long)a1 TxL3Packets:(unsigned long long)a2 RxL3Packets:(unsigned long long)a3;
- (void)updateWithInterfaceCapabilities:(id)a0 AndNetworkDetails:(id)a1;
- (void)populateWithRssi:(long long)a0 noise:(long long)a1 snr:(long long)a2 selfCca:(unsigned long long)a3 otherCca:(unsigned long long)a4 interference:(unsigned long long)a5 totalReportedCca:(unsigned long long)a6 beaconPer:(unsigned long long)a7 rxCrsGlitch:(unsigned long long)a8 rxBadPLCP:(unsigned long long)a9 rxStart:(unsigned long long)a10;
- (id)description;
- (void).cxx_destruct;
- (void)populateWithRssi:(long long)a0 rssi1:(long long)a1 rssi2:(long long)a2 noise:(long long)a3 snr:(long long)a4 selfCca:(unsigned long long)a5 otherCca:(unsigned long long)a6 interference:(unsigned long long)a7 totalReportedCca:(unsigned long long)a8 beaconPer:(unsigned long long)a9 beaconTbtt:(unsigned long long)a10 rxCrsGlitch:(unsigned long long)a11 rxBadPLCP:(unsigned long long)a12 rxStart:(unsigned long long)a13 rxBphyCrsGlitch:(unsigned long long)a14 rxBphyBadPLCP:(unsigned long long)a15 sampleDuration:(unsigned long long)a16;
- (void)populateWithTxFrames:(unsigned long long)a0 RxFrames:(unsigned long long)a1 TxFails:(unsigned long long)a2 TxRetries:(unsigned long long)a3 RxRetries:(unsigned long long)a4 TxRate:(unsigned long long)a5 RxRate:(unsigned long long)a6 txRTS:(unsigned long long)a7 txRTSFail:(unsigned long long)a8 txMpdu:(unsigned long long)a9 txAMPDU:(unsigned long long)a10;
- (void)populateWithMotionState:(id)a0;

@end
