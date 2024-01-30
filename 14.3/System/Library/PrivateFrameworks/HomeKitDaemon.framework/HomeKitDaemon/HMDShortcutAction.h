@class WFHomeWorkflowController, NSData, WFHomeWorkflow;

@interface HMDShortcutAction : HMDAction {
    NSData *_shortcutData;
}

@property (readonly) WFHomeWorkflow *shortcut;
@property (readonly) WFHomeWorkflowController *controller;

+ (id)logCategory;
+ (BOOL)supportsSecureCoding;
+ (id)actionWithDictionaryRepresentation:(id)a0 home:(id)a1 actionSet:(id)a2;
+ (id)actionWithDictionaryRepresentation:(id)a0 home:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)requiresDeviceUnlock;
- (id)initWithCoder:(id)a0;
- (unsigned long long)type;
- (id)dictionaryRepresentation;
- (Class)modelClass;
- (void)encodeWithCoder:(id)a0;
- (id)associatedAccessories;
- (BOOL)isAssociatedWithAccessory:(id)a0;
- (id)modelObjectWithChangeType:(unsigned long long)a0 version:(long long)a1;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (id)initWithSerializedShortcut:(id)a0 uuid:(id)a1 actionSet:(id)a2;
- (id)stateDump;
- (unsigned long long)entitlementsForNotification;
- (id)removeShortcut;
- (void)executeWithSource:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (id)initWithModelObject:(id)a0 parent:(id)a1 error:(id *)a2;

@end
