@class RTVisit, RTVisitLocationPoints;

@interface RTVisitCluster : NSObject

@property (readonly, nonatomic) RTVisitLocationPoints *points;
@property (readonly, nonatomic) RTVisit *visit;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isExitDateBeforeDate:(id)a0;
- (BOOL)isPartialAndExitDateIsEqualToDate:(id)a0;
- (id)description;
- (id)initWithPoints:(id)a0;
- (id)initWithPoints:(id)a0 visit:(id)a1;
- (BOOL)isDateInside:(id)a0;
- (BOOL)isCompleteAndExitDateIsEqualToDate:(id)a0;

@end
