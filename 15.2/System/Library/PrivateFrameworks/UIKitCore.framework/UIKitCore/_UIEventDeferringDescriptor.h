@class NSString, BKSHIDEventDeferringEnvironment;

@interface _UIEventDeferringDescriptor : NSObject <NSCopying, BSDebugDescriptionProviding> {
    BOOL _compatibility;
    unsigned int _predicateContextID;
    int _targetPID;
    unsigned int _targetContextID;
    unsigned long long _scope;
    BKSHIDEventDeferringEnvironment *_environment;
    NSString *_displayHardwareIdentifier;
    NSString *_predicateSceneIdentityString;
    void *_predicateWindowPointer;
    void *_targetWindowPointer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;

@end
