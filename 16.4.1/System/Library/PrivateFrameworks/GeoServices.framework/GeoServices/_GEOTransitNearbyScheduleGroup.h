@class NSString, NSArray, GEOPDTransitScheduleGroup;

@interface _GEOTransitNearbyScheduleGroup : NSObject <GEOTransitNearbyScheduleGroup> {
    GEOPDTransitScheduleGroup *_transitScheduleGroup;
}

@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *pinnedDisplayName;
@property (readonly, nonatomic) NSArray *lineCells;
@property (readonly, nonatomic) BOOL hasWalkingDetails;
@property (readonly, nonatomic) unsigned long long minWalkingTime;
@property (readonly, nonatomic) unsigned long long maxWalkingTime;
@property (readonly, nonatomic) unsigned long long minWalkingDistance;
@property (readonly, nonatomic) unsigned long long maxWalkingDistance;
@property (readonly, nonatomic) long long groupType;
@property (readonly, nonatomic) NSArray *incidents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lineSectionsForNearbyTransitGroup:(id)a0 departureSequenceContainers:(id)a1 departureSequences:(id)a2;

- (void).cxx_destruct;
- (id)initWithTransitScheduleGroup:(id)a0 departureSequenceContainers:(id)a1 scheduledDepartureSequences:(id)a2 incidentsMap:(id)a3;

@end
