@class NSString, NSDateInterval, NSData, TASPAdvertisement, NSNumber;

@interface TAMetricsVisit : NSObject <TAMetricsProtocol>

@property (readonly, nonatomic) NSData *address;
@property (readonly, nonatomic) unsigned long long totalVisitCount;
@property (readonly, nonatomic) unsigned long long totalDistinctVisitCount;
@property (readonly, nonatomic) unsigned long long consecutiveVisitCount;
@property (readonly, nonatomic) unsigned long long consecutiveAndDistinctFromPrevVisitCount;
@property (readonly, nonatomic) double durationOfVisitEntryConsideration;
@property (readonly, nonatomic) double durationOfVisitExitConsideration;
@property (readonly, nonatomic) NSDateInterval *visitEntryDelay;
@property (readonly, nonatomic) NSDateInterval *visitExitDelay;
@property (readonly, nonatomic) double latitude;
@property (readonly, nonatomic) double longitude;
@property (readonly, nonatomic) NSNumber *distanceToPreviousSeenVisit;
@property (readonly, nonatomic) TASPAdvertisement *latestAdvertisement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionDictionary;
- (void).cxx_destruct;
- (unsigned long long)getMetricsCollectionType;
- (id)initWithSnapshotHistory:(id)a0 andAddress:(id)a1 andVisitFilterSettings:(id)a2;

@end
