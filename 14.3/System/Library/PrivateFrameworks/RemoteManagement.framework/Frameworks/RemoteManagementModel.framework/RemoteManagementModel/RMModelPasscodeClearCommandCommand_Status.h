@class NSSet;

@interface RMModelPasscodeClearCommandCommand_Status : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;
@property (class, readonly, copy) NSSet *allowedReasons;

+ (id)build;
+ (id)buildRequiredOnly;

- (id)serializeWithType:(short)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;

@end
