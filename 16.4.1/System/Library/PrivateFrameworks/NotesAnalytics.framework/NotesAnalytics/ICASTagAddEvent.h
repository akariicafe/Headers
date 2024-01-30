@class NSString, AASessionGroup, NSDictionary;

@interface ICASTagAddEvent : NSObject <AAEventType>

@property (class, readonly, copy, nonatomic) NSString *eventName;
@property (class, readonly, nonatomic) AASessionGroup *sessionGroup;
@property (class, readonly, nonatomic) long long timestampGranularity;

@property (readonly, copy, nonatomic) NSDictionary *eventProperties;

@end
