@class NSString, NSNumber;

@interface WAAQIAvailabilityData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSNumber *isAQIAvailable;

- (id)toDict;
- (void).cxx_destruct;
- (id)initWithIsAQIAvailable:(id)a0;

@end
