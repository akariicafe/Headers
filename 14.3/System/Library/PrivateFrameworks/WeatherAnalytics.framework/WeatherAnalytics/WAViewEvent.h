@class NSString, NSDictionary;

@interface WAViewEvent : NSObject <AAEventType>

@property (class, readonly, copy, nonatomic) NSString *eventName;

@property (readonly, copy, nonatomic) NSDictionary *eventProperties;

@end
