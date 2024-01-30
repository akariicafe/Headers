@class NSSet, NSArray;

@interface CEMEventSubscriptionNowCommand_Status : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;
@property (class, readonly, copy) NSSet *allowedReasons;

@property (copy, nonatomic) NSArray *statusInactiveEvents;
@property (copy, nonatomic) NSArray *statusUnknownEvents;

+ (id)buildRequiredOnly;
+ (id)buildWithInactiveEvents:(id)a0 withUnknownEvents:(id)a1;

- (void).cxx_destruct;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayload;

@end
