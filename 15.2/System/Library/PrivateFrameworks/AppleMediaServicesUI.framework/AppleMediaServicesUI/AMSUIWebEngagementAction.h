@class NSDictionary, NSArray, NSString;

@interface AMSUIWebEngagementAction : AMSUIWebAction <AMSUIWebActionRunnable>

@property (readonly, nonatomic) NSDictionary *event;
@property (readonly, nonatomic) NSArray *messagePlacements;
@property (readonly, nonatomic) NSString *messageServiceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
