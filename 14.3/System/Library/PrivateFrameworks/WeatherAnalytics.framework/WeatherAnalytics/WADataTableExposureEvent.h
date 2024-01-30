@class NSString, NSDictionary;

@interface WADataTableExposureEvent : NSObject <AAEventType>

@property (class, readonly, copy, nonatomic) NSString *eventName;

@property (readonly, copy, nonatomic) NSDictionary *eventProperties;

@end
