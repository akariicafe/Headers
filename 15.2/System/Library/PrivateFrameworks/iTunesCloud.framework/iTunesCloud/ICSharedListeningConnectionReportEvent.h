@class NSString, NSError, NSDate, NSMutableArray;

@interface ICSharedListeningConnectionReportEvent : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) double duration;
@property (retain, nonatomic) NSMutableArray *subEvents;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)addSubEvent:(id)a0;

@end
