@class CRRepairHistory, CRUIAnalytics, MRLocalization, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SystemHealthUI : PSListController {
    int failedComponentsCount;
    NSObject<OS_dispatch_queue> *asyncQueue;
    CRUIAnalytics *analytics;
    BOOL deviceFDRVersion1;
    BOOL isRepaired;
    BOOL isRCHLDevice;
    NSMutableArray *untrustedComponents;
    CRRepairHistory *localRepairHistory;
    MRLocalization *locale;
}

- (id)init;
- (void).cxx_destruct;
- (int)getBatteryHealthServiceState;
- (void)setupCAARetry:(id)a0 caaRepairHistory:(id *)a1;
- (void)clearCAARequestHistory;
- (void)extractAudioSpecifiers;
- (void)extractBasebandSpecifiers:(id)a0;
- (void)extractBatterySpecifiers:(id)a0 caaRepairHistory:(id)a1 rchlHistory:(id)a2;
- (void)extractBluetoohSpecifiers;
- (void)extractCameraSpecifiers:(id)a0 componentsInfoSpecifiers:(id)a1 caaRepairHistory:(id)a2 srvp:(id)a3 rchlHistory:(id)a4;
- (void)extractDisplaySpecifiers:(id)a0 caaRepairHistory:(id)a1 srvp:(id)a2 rchlHistory:(id)a3;
- (void)extractFaceIDSpecifiers:(id)a0 caaRepairHistory:(id)a1 rchlHistory:(id)a2;
- (void)extractMtubSpecifiers:(id)a0 caaRepairHistory:(id)a1 srvp:(id)a2 rchlHistory:(id)a3;
- (void)extractNFCSpecifiers:(id)a0;
- (void)extractRCameraHWFailureSpecifiers;
- (void)extractUWBSpecifiers:(id)a0;
- (void)extractWifiSpecifiers;
- (void)getCAAForRepairHistory;
- (long long)getCpuUptimeInSec;
- (id)getCurrentSystemHealthInfoSpecifiers;
- (BOOL)isVaildCAA:(id)a0;
- (void)refreshFailedComponents;
- (void)requestCAA;
- (void)retryCAA;
- (void)scheduleNetworkActivity;
- (id)setupGroupSpecifer;
- (id)valueForSpecifierPartData:(id)a0;
- (id)valueForSpecifierPartDate:(id)a0;
- (id)valueForSpecifierPartIssue:(id)a0;
- (id)valueForSpecifierPartProperty:(id)a0;
- (id)valueForSpecifierPartRC:(id)a0;
- (id)valueForSpecifierPartService:(id)a0;
- (id)valueForSpecifierRepaired:(id)a0;
- (id)valueForSpecifierUnknown;

@end
