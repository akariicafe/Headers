@class NSString, NSDictionary;

@interface STViewAllActivityCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent>

@property (readonly) long long daysSinceLastView;
@property (readonly) long long userAgeGroup;
@property (readonly) BOOL userIsManaged;
@property (readonly) BOOL userIsRemote;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSDictionary *payload;

+ (id)description;

@end
