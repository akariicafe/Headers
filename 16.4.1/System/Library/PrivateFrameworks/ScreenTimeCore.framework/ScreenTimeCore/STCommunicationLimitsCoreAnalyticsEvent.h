@class NSString, NSDictionary;

@interface STCommunicationLimitsCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent>

@property (readonly) BOOL communicationLimited;
@property (readonly) BOOL contactManagementEnabled;
@property (readonly) BOOL contactEditingAllowed;
@property (readonly) long long userAgeGroup;
@property (readonly) BOOL userIsRemote;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSDictionary *payload;

+ (id)description;

@end
