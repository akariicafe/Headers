@class NSUUID, NSMutableArray, PLLocationOfInterestLocation;

@interface PLLocationOfInterest : NSObject

@property (retain, nonatomic) NSMutableArray *visits;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) double typeRadius;
@property (readonly, nonatomic) PLLocationOfInterestLocation *routineLocation;
@property (readonly, nonatomic) PLLocationOfInterestLocation *mapItemLocation;

- (void)removeVisit:(id)a0;
- (void).cxx_destruct;
- (void)addVisit:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithIdentifier:(id)a0 locationOfInterestType:(long long)a1 typeRadius:(double)a2 routineLocation:(id)a3 mapItemLocation:(id)a4;
- (BOOL)isEqual:(id)a0;
- (double)distanceFromLocation:(id)a0;
- (double)centerDistanceFromLocation:(id)a0;

@end
