@class NSString, NSDictionary, NSDate, NSNumber;

@interface DESUserDefaultsStoreRecord : NSObject

@property (readonly, nonatomic) NSString *recordID;
@property (readonly, nonatomic) NSString *completionDateKey;
@property (copy, nonatomic) NSDate *lastCompletionDate;
@property (nonatomic) long long performCount;
@property (copy, nonatomic) NSDictionary *debugInfo;
@property (copy, nonatomic) NSNumber *periodInSeconds;

+ (void)purgeObsoleted;
+ (id)schedulerWakeupPeriodInSeconds;
+ (void)setSchedulerWakeupPeriodInSeconds:(id)a0;

- (id)periodKey;
- (id)description;
- (id)debugInfoKey;
- (void).cxx_destruct;
- (id)initWithRecordID:(id)a0;
- (id)performCountKey;

@end
