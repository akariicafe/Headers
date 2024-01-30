@class NSString, NSDictionary;

@interface WAAppSessionEndEvent : NSObject <AAEventType>

@property (class, readonly, copy, nonatomic) NSString *eventName;

@property (readonly, copy, nonatomic) NSDictionary *eventProperties;

@end
