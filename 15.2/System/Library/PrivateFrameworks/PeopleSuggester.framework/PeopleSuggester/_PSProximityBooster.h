@class RPPeopleDiscovery;

@interface _PSProximityBooster : NSObject

@property (retain, nonatomic) RPPeopleDiscovery *peopleDiscovery;

- (void).cxx_destruct;
- (id)init;
- (void)startMonitoringProximity;
- (void)stopMonitoringProximity;
- (id)suggestionsByBoostingNearbySuggestions:(id)a0;

@end
