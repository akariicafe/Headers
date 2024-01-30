@class NSSet, NSString;

@interface CEMManagementTestMessageMessage_Reply : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedReplyKeys;
@property (class, readonly, copy) NSSet *allowedReasons;

@property (copy, nonatomic) NSString *replyEcho;

+ (id)buildRequiredOnlyWithEcho:(id)a0;
+ (id)buildWithEcho:(id)a0;

- (void).cxx_destruct;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayload;

@end
