@class NSString, NSMutableDictionary, NSMutableSet;

@interface BRCSyncHealthReport : NSObject

@property (readonly, nonatomic) unsigned long long totalZoneCount;
@property (readonly, nonatomic) unsigned long long blockedZonesCount;
@property (readonly, nonatomic) unsigned long long totalItemsCount;
@property (readonly, nonatomic) NSMutableDictionary *syncUpErrorsByZone;
@property (readonly, nonatomic) NSMutableDictionary *syncDownErrorsByZone;
@property (readonly, nonatomic) NSMutableSet *uploadFailures;
@property (readonly, nonatomic) NSMutableSet *downloadFailures;
@property (readonly, nonatomic) NSString *dsid;
@property (readonly, nonatomic) NSString *rampNumber;

- (id)init;
- (void).cxx_destruct;
- (void)generateReportWithSession:(id)a0;
- (void)syncErrors:(id /* block */)a0;
- (void)_fillTransferFailure:(id)a0 withRowID:(unsigned long long)a1 atDate:(id)a2 session:(id)a3;
- (id)getRampNumberForSession:(id)a0;

@end
