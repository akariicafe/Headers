@class NSString, NSDictionary, NSDate, NSNumber;

@interface DESUserDefaultsStoreRecord : NSObject

@property (readonly, nonatomic) NSString *recordID;
@property (readonly, nonatomic) NSString *completionDateKey;
@property (copy, nonatomic) NSDate *lastCompletionDate;
@property (nonatomic) long long performCount;
@property (copy, nonatomic) NSDictionary *debugInfo;
@property (copy, nonatomic) NSNumber *periodInSeconds;
@property (copy, nonatomic) NSNumber *maxTimeLimitInSeconds;

+ (id)bmltActivatedEventDate;
+ (void)purgeObsoleted;
+ (id)schedulerWakeupPeriodInSeconds;
+ (void)setBmltActivatedEventDate:(id)a0;
+ (void)setSchedulerWakeupPeriodInSeconds:(id)a0;
+ (void)setShouldRegisterXPCActivity:(BOOL)a0;
+ (BOOL)shouldRegisterXPCActivity;

- (id)description;
- (void).cxx_destruct;
- (id)maxTimeLimitKey;
- (id)performCountKey;
- (id)debugInfoKey;
- (id)initWithRecordID:(id)a0;
- (id)periodKey;

@end
