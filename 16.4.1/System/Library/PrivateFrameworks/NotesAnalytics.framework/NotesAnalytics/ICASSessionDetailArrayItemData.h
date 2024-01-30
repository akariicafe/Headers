@class NSString, NSNumber, ICASSessionType;

@interface ICASSessionDetailArrayItemData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) ICASSessionType *sessionType;
@property (readonly, nonatomic) NSNumber *startTimestamp;
@property (readonly, nonatomic) NSNumber *endTimestamp;
@property (readonly, nonatomic) NSNumber *sessionDuration;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithSessionType:(id)a0 startTimestamp:(id)a1 endTimestamp:(id)a2 sessionDuration:(id)a3;

@end
