@class NSString, SUCarrierDownloadPolicyProperties, SUDescriptor, SUNetworkMonitor;

@interface SUDefaultDownloadPolicy : NSObject <SUDownloadPolicy>

@property (retain, nonatomic) SUCarrierDownloadPolicyProperties *carrierPolicy;
@property (nonatomic, getter=isCellularCapable) BOOL cellularCapable;
@property (retain, nonatomic) SUNetworkMonitor *networkMonitor;
@property (retain, nonatomic) SUDescriptor *descriptor;
@property (nonatomic) int cellularFeeAgreementStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDescriptor:(id)a0;
- (void)dealloc;
- (BOOL)isDownloadable;
- (BOOL)isDownloadAllowableForCellular;
- (BOOL)isDownloadFreeForCellular;
- (BOOL)allowExpensiveNetwork;
- (BOOL)isDownloadAllowableForCellularRoaming;
- (BOOL)isDownloadAllowableForWiFi;
- (BOOL)isPowerRequired;
- (BOOL)hasEnoughDiskSpace;
- (BOOL)isDownloadAllowableForCellular2G;
- (BOOL)isSamePolicy:(id)a0;
- (id)_stringForBool:(BOOL)a0;
- (BOOL)_isCellularCapable;
- (BOOL)isDownloadAllowableForCellularIncludingInexpensiveHDM:(BOOL)a0;
- (BOOL)isDownloadableForCurrentNetworkConditions:(long long *)a0 cellularFeesApply:(BOOL *)a1 powerRequired:(BOOL *)a2;
- (BOOL)_isDownloadableForNetworkType:(int)a0 error:(long long *)a1 cellularFeesApply:(BOOL *)a2 powerRequired:(BOOL *)a3;
- (BOOL)cellularDownloadFeesApply;
- (BOOL)_inexpensiveHDM;
- (unsigned long long)wifiOnlyPeriodInDays;
- (BOOL)isDownloadableForCurrentNetworkConditions:(long long *)a0 cellularFeesApply:(BOOL *)a1;

@end
