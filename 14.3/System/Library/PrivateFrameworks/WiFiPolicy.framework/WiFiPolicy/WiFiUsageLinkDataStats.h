@interface WiFiUsageLinkDataStats : NSObject

@property (nonatomic) unsigned long long txBytes;
@property (nonatomic) unsigned long long rxBytes;
@property (nonatomic) unsigned long long txFrames;
@property (nonatomic) unsigned long long rxFrames;
@property (nonatomic) unsigned long long txFails;
@property (nonatomic) unsigned long long txRetries;
@property (nonatomic) unsigned long long rxRetries;
@property (nonatomic) unsigned long long rxGlitches;
@property (nonatomic) unsigned long long rxBadFcs;
@property (nonatomic) unsigned long long rxBadPlcp;
@property (nonatomic) unsigned long long txRate;
@property (nonatomic) unsigned long long rxRate;

+ (id)dataStatsWithTxFrames:(unsigned long long)a0 RxFrames:(unsigned long long)a1 TxFails:(unsigned long long)a2 TxRetries:(unsigned long long)a3 RxRetries:(unsigned long long)a4 RxGlitches:(unsigned long long)a5 RxBadFcs:(unsigned long long)a6 RxBadPlcp:(unsigned long long)a7 TxRate:(unsigned long long)a8 RxRate:(unsigned long long)a9;

@end
