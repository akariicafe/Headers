@class NSArray;

@interface AMSEngagementMessageEventResponse : AMSEngagementEnqueueResult

@property (readonly, nonatomic) NSArray *messageActions;

- (id)initWithEnqueueResult:(id)a0;
- (void)_processActions:(id)a0;
- (void).cxx_destruct;

@end
