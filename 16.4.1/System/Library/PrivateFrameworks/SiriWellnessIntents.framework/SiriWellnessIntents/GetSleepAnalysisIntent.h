@class NSDate;

@interface GetSleepAnalysisIntent : INIntent

@property (nonatomic, copy) NSDate *start;
@property (nonatomic, copy) NSDate *end;

- (id)initWithCoder:(id)a0;
- (id)init;

@end
