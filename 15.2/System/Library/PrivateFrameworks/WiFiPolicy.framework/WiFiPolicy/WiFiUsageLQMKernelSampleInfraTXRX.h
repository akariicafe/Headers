@class NSDate;

@interface WiFiUsageLQMKernelSampleInfraTXRX : WiFiUsageLQMSample

@property (retain, nonatomic) NSDate *timestamp;
@property (nonatomic) unsigned long long decodingAttempts;
@property (nonatomic) unsigned long long rxStartOverDecodingAttemptsPercentage;
@property (nonatomic) unsigned long long rxBadPlcpOverDecodingAttemptsPercentage;
@property (nonatomic) unsigned long long rxCrsGlitchOverDecodingAttemptsPercentage;
@property (nonatomic) unsigned long long rxDecodingErrorsOverRxStart;
@property (nonatomic) unsigned long long rxUcastOverRxStart;
@property (nonatomic) unsigned long long rxBeaconOverRxStart;
@property (nonatomic) unsigned long long rxFrmTooLongOverDecodingErrors;
@property (nonatomic) unsigned long long rxFrmTooShrtOverDecodingErrors;
@property (nonatomic) unsigned long long rxAnyErrOverDecodingErrors;
@property (nonatomic) unsigned long long rxBadFCSOverDecodingErrors;
@property (nonatomic) unsigned long long rxResponseTimeoutOverDecodingErrors;
@property (nonatomic) unsigned long long rxNoDelimOverDecodingErrors;
@property (nonatomic) unsigned long long rxFifo0OvflOverDecodingErrors;
@property (nonatomic) unsigned long long rxFifo1OvflOverDecodingErrors;
@property (nonatomic) unsigned long long rxUcastDataPercentage;
@property (nonatomic) unsigned long long rxUcastMgmtPercentage;
@property (nonatomic) unsigned long long rxUcastCtrlPercentage;
@property (nonatomic) unsigned long long rxUcastRTSOverRxCtrlFrmsPercentage;
@property (nonatomic) unsigned long long rxUcastCTSOverRxCtrlFrmsPercentage;
@property (nonatomic) unsigned long long rxBACKOverRxCtrlFrmsPercentage;
@property (nonatomic) unsigned long long rxUcastACKOverRxCtrlFrmsPercentage;
@property (nonatomic) unsigned long long rxBeaconMbss;
@property (nonatomic) unsigned long long rxBeaconObss;
@property (nonatomic) unsigned long long txAllFrm;
@property (nonatomic) unsigned long long txPhyErrorOverTxAllFrmPercentage;
@property (nonatomic) unsigned long long txAMPDUOverTxAllFrmPercentage;
@property (nonatomic) unsigned long long txUcastOverTxAllFrmPercentage;
@property (nonatomic) unsigned long long txCtrlFrms;
@property (nonatomic) unsigned long long txRTSOverTxCtrlFrmsPercentage;
@property (nonatomic) unsigned long long txCTSOverTxCtrlFrmsPercentage;
@property (nonatomic) unsigned long long txBACKOverTxCtrlFrmsPercentage;
@property (nonatomic) unsigned long long txACKOverTxCtrlFrmsPercentage;
@property (nonatomic) unsigned long long txRTSFailOvertxRTS;
@property (nonatomic) double duration;

+ (id)sampleWithStruct:(struct apple80211_infra_band_tx_rx_stats { unsigned int x0; unsigned long long x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned int x32; unsigned int x33; } *)a0 WithReferenceDate:(id)a1 AsNsec:(unsigned long long)a2;

- (void).cxx_destruct;
- (id)initWithStruct:(struct apple80211_infra_band_tx_rx_stats { unsigned int x0; unsigned long long x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned int x32; unsigned int x33; } *)a0 WithReferenceDate:(id)a1 AsNsec:(unsigned long long)a2;

@end
