@class NSSet, NSString;

@interface RMModelManagementTestCommandCommand_Status : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;
@property (class, readonly, copy) NSSet *allowedReasons;

@property (copy, nonatomic) NSString *statusEcho;

+ (id)buildWithEcho:(id)a0;
+ (id)buildRequiredOnlyWithEcho:(id)a0;

- (void).cxx_destruct;
- (id)serializeWithType:(short)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;

@end
