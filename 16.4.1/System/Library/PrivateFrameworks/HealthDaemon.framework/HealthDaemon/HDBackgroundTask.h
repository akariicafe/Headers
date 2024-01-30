@class NSDictionary, NSObject, NSDate;
@protocol OS_xpc_object;

@interface HDBackgroundTask : NSObject {
    NSObject<OS_xpc_object> *_job;
}

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSDictionary *userContext;
@property (nonatomic) BOOL shiftsDatesWithSystemClockChanges;
@property (nonatomic) BOOL allowsPowerOptimizedScheduling;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)taskExpired;
- (BOOL)taskSatisfied;
- (BOOL)taskValid;

@end
