@class NSSet, NSString;

@interface CEMManagementTestDeclaration_Status : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;
@property (class, readonly, copy) NSSet *allowedReasons;

@property (copy, nonatomic) NSString *statusEcho;

+ (id)buildRequiredOnlyWithEcho:(id)a0;
+ (id)buildWithEcho:(id)a0;

- (void).cxx_destruct;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayload;

@end
