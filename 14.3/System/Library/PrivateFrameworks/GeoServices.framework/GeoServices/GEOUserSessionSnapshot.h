@class GEOUserSessionEntity;

@interface GEOUserSessionSnapshot : NSObject

@property (retain, nonatomic) GEOUserSessionEntity *shortSessionEntity;
@property (retain, nonatomic) GEOUserSessionEntity *longSessionEntity;
@property (retain, nonatomic) GEOUserSessionEntity *navSessionEntity;
@property (retain, nonatomic) GEOUserSessionEntity *cohortSessionEntity;
@property (retain, nonatomic) GEOUserSessionEntity *fifteenMonthSessionEntity;
@property (nonatomic) double usageEventTime;

- (id)initWithShortSessionEntity:(id)a0 longSessionEntity:(id)a1 navSessionEntity:(id)a2 cohortSessionEntity:(id)a3 fifteenMonthSessionEntity:(id)a4;
- (void).cxx_destruct;

@end
