@class NSMutableDictionary, NSString, NSMutableSet, NSArray, BRDSIDString;

@interface BRCSyncHealthReport : NSObject

@property (readonly, nonatomic) unsigned long long totalZoneCount;
@property (readonly, nonatomic) unsigned long long blockedZonesCount;
@property (readonly, nonatomic) unsigned long long clientTruthTotalItemsCount;
@property (readonly, nonatomic) unsigned long long serverTruthTotalItemsCount;
@property (readonly, nonatomic) unsigned long long zonesNeverFullSync;
@property (readonly, nonatomic) NSMutableDictionary *syncUpErrorsByMangledID;
@property (readonly, nonatomic) NSMutableDictionary *syncDownErrorsByMangledID;
@property (readonly, nonatomic) NSMutableSet *syncUpFailures;
@property (readonly, nonatomic) NSMutableSet *uploadFailures;
@property (readonly, nonatomic) NSMutableSet *downloadFailures;
@property (readonly, nonatomic) BRDSIDString *dsid;
@property (readonly, nonatomic) NSString *rampNumber;
@property (readonly, nonatomic) unsigned long long clientTruthDirFaultCount;
@property (readonly, nonatomic) unsigned long long serverTruthDirFaultCount;
@property (readonly, nonatomic) unsigned long long serverTruthDirCount;
@property (readonly, nonatomic) unsigned long long timeSinceLogin;
@property (readonly, nonatomic) NSArray *telemetryErrorEvents;
@property (readonly, nonatomic) NSArray *telemetryOtherEvents;

- (id)init;
- (void).cxx_destruct;
- (void)_fillTransferFailure:(id)a0 withRowID:(unsigned long long)a1 atDate:(id)a2 session:(id)a3;
- (id)_injectionForAnalyticsServiceCode:(int)a0;
- (void)generateReportWithSession:(id)a0;
- (id)getRampNumberForSession:(id)a0;
- (void)syncErrors:(id /* block */)a0;

@end
