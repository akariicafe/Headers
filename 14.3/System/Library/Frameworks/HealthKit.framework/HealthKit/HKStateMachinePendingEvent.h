@class NSError, NSDate;

@interface HKStateMachinePendingEvent : NSObject

@property (nonatomic) long long event;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;

@end
