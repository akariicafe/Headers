@class NSArray, NSString;

@interface COCondition : NSObject <COConditionProtocol>

@property (retain, nonatomic) NSArray *additionalArguments;
@property (readonly) NSString *userFriendlyName;
@property (readonly) NSString *identifierName;
@property (readonly) BOOL persistsAfterReboot;
@property (readonly) BOOL isDestructive;
@property (readonly) BOOL isInternalOnly;
@property (readonly) BOOL active;

+ (id)info;
+ (id)description;
+ (id)profileFriendlyName;

- (BOOL)setUp;
- (void)tearDown;
- (id)init;
- (void).cxx_destruct;
- (BOOL)getBoolProperty:(id)a0 fromDict:(id)a1 withDefault:(BOOL)a2;
- (BOOL)getBoolProperty:(id)a0 withDefault:(BOOL)a1;
- (id)getStringProperty:(id)a0 fromDict:(id)a1 withDefault:(id)a2;
- (id)getStringProperty:(id)a0 withDefault:(id)a1;
- (id)identifierNameFromDict:(id)a0;
- (BOOL)isDestructiveFromDict:(id)a0;
- (BOOL)isInternalOnlyFromDict:(id)a0;
- (BOOL)persistsAfterRebootFromDict:(id)a0;
- (id)userFriendlyNameFromDict:(id)a0;

@end
