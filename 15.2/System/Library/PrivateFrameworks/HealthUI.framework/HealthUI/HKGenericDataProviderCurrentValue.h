@class NSString, NSNumber, NSDate;

@interface HKGenericDataProviderCurrentValue : NSObject <HKDataProviderValue> {
    NSNumber *_value;
}

@property (retain, nonatomic) NSDate *date;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
