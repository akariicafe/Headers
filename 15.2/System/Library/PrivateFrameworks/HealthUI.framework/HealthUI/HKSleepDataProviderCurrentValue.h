@class NSString, NSNumber, NSDate;

@interface HKSleepDataProviderCurrentValue : NSObject <HKDataProviderValue> {
    NSNumber *_timeIntervalSlept;
}

@property (retain, nonatomic) NSDate *date;
@property (readonly, nonatomic) long long categoryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dataProviderValueWithSleepQueryResult:(id)a0;

@end
