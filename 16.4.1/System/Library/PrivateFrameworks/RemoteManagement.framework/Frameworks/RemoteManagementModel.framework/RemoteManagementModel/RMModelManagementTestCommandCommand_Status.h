@class NSSet, NSString;

@interface RMModelManagementTestCommandCommand_Status : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;
@property (class, readonly, copy) NSSet *allowedReasons;

@property (copy, nonatomic) NSString *statusEcho;

+ (id)buildRequiredOnlyWithEcho:(id)a0;
+ (id)buildWithEcho:(id)a0;

- (void).cxx_destruct;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
