@class WFHomeWorkflow;

@interface HMShortcutAction : HMAction

@property (readonly) WFHomeWorkflow *shortcut;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isSupportedForHome:(id)a0;
+ (id)_actionWithInfo:(id)a0 home:(id)a1;

- (void).cxx_destruct;
- (id)_serializeForAdd;
- (BOOL)requiresDeviceUnlock;
- (BOOL)isValid;
- (id)initWithShortcut:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)type;

@end
