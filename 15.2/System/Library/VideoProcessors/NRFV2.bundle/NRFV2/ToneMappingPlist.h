@class SRLv2Plist, TCRPlist, SFFPlist, ToneMapSmoothingPlist, NSDictionary, SRLPlist;

@interface ToneMappingPlist : NSObject {
    SRLPlist *srl;
    SRLv2Plist *srlv2;
    TCRPlist *tcr;
    SFFPlist *sff;
    ToneMapSmoothingPlist *mstm;
    ToneMapSmoothingPlist *mstmWithSRL;
    BOOL enableLocalContrast;
    float detailEnhanceLeftLimit;
    float detailEnhanceRightLimit;
    float detailEnhanceStrength;
    int srlVersion;
    BOOL enableMSTM;
    BOOL enableSFF;
    BOOL enableTCR;
    BOOL enableSTF;
    NSDictionary *stfTuningParameters;
    float chromaGainAdjustmentPower;
    BOOL enableGlobalContrast;
    float blackSubtractionClippingRatio;
    float blackSubtractionLowLimit;
    float maximumContrastStrength;
    BOOL GreenSkyFixEnabled;
    float GreenSkyFixEVZeroTargetGainThreshold;
    float GreenSkyFixCCTThreshold;
    BOOL YellowSatFixEnabled;
    BOOL maskedSkyFixEnabled;
    int maskedSkyCubeVersion;
}

+ (void)initialize;

- (void)applyOverrides;
- (void).cxx_destruct;
- (id)init;
- (int)readPlist:(id)a0;

@end
