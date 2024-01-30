@class NSSet;

@interface CEMPolicyCategoryDeclaration_Status : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;
@property (class, readonly, copy) NSSet *allowedReasons;

+ (id)build;
+ (id)buildRequiredOnly;

- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayload;

@end
