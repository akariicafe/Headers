@class NSString, NSDate;

@interface HKHandwashingEventDataProviderCountComparison : NSObject <HKDataProviderValue> {
    long long _completeCount;
    long long _totalCount;
}

@property (retain, nonatomic) NSDate *date;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
