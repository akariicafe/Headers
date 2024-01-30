@class NSSet, NSString;

@interface CEMManagementTestEvent_EventMessage : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedEventMessageKeys;
@property (class, readonly, copy) NSSet *allowedReasons;

@property (copy, nonatomic) NSString *eventmessageEcho;

+ (id)buildRequiredOnlyWithEcho:(id)a0;
+ (id)buildWithEcho:(id)a0;

- (void).cxx_destruct;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayload;

@end
