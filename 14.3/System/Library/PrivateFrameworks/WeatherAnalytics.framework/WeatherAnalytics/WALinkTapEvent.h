@class NSString, NSDictionary;

@interface WALinkTapEvent : NSObject <AAEventType>

@property (class, readonly, copy, nonatomic) NSString *eventName;

@property (readonly, copy, nonatomic) NSDictionary *eventProperties;

@end
