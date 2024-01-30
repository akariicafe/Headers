@class NSData, WFHomeWorkflow;

@interface HMShortcutAction : HMAction {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    WFHomeWorkflow *_shortcut;
    NSData *_shortcutData;
}

@property (readonly) WFHomeWorkflow *shortcut;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isSupportedForHome:(id)a0;

- (id)initWithUUID:(id)a0;
- (BOOL)isValidWithError:(id *)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)type;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithShortcut:(id)a0;
- (BOOL)_mergeWithNewObject:(id)a0;
- (id)_serializeForAdd;
- (id)initWithDictionary:(id)a0 home:(id)a1;
- (BOOL)requiresDeviceUnlock;
- (id)shortcutData;

@end
