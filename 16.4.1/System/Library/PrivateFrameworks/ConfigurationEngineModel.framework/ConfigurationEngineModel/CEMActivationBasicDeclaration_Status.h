@class NSSet, NSArray;

@interface CEMActivationBasicDeclaration_Status : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;
@property (class, readonly, copy) NSSet *allowedReasons;

@property (copy, nonatomic) NSArray *statusInstalledConfigurations;

+ (id)buildRequiredOnly;
+ (id)buildWithInstalledConfigurations:(id)a0;

- (void).cxx_destruct;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayload;

@end
