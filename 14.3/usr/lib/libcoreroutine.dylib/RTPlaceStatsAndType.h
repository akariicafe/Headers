@class NSUUID, RTLearnedPlaceTypeInferencePlaceStats;

@interface RTPlaceStatsAndType : NSObject

@property (readonly, nonatomic) RTLearnedPlaceTypeInferencePlaceStats *placeStats;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSUUID *placeIdentifier;

- (void).cxx_destruct;
- (id)initWithPlaceStats:(id)a0 type:(unsigned long long)a1 placeIdentifier:(id)a2;

@end
