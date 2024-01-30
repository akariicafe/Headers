@class NSString, NSNumber;

@interface ICASActivityStreamDurationSummaryData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSNumber *halfHeightViewDuration;
@property (readonly, nonatomic) NSNumber *fullHeightViewDuration;
@property (readonly, nonatomic) NSNumber *sideBarViewDuration;
@property (readonly, nonatomic) NSNumber *minimizedViewDuration;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithHalfHeightViewDuration:(id)a0 fullHeightViewDuration:(id)a1 sideBarViewDuration:(id)a2 minimizedViewDuration:(id)a3;

@end
