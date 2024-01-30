@class NSData, WFHomeWorkflowController, WFHomeWorkflow;

@interface HMDShortcutAction : HMDAction <NSCopying> {
    NSData *_shortcutData;
    WFHomeWorkflow *_shortcut;
    WFHomeWorkflowController *_controller;
}

+ (BOOL)supportsSecureCoding;
+ (id)logCategory;
+ (id)actionWithDictionaryRepresentation:(id)a0 home:(id)a1;
+ (id)actionWithDictionaryRepresentation:(id)a0 home:(id)a1 actionSet:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (Class)modelClass;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)type;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (BOOL)requiresDeviceUnlock;
- (id)associatedAccessories;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (BOOL)isAssociatedWithAccessory:(id)a0;
- (id)modelObjectWithChangeType:(unsigned long long)a0 version:(long long)a1;
- (id)initWithSerializedShortcut:(id)a0 uuid:(id)a1 actionSet:(id)a2;
- (id)removeShortcut;
- (id)stateDump;
- (void)executeWithSource:(unsigned long long)a0 clientName:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)isUnsecuringAction;
- (unsigned long long)entitlementsForNotification;
- (id)initWithModelObject:(id)a0 parent:(id)a1 error:(id *)a2;

@end
