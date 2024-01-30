@class NSString, NSSet, NSMutableSet, BKSHIDEventDeferringTarget;

@interface _UIEventDeferringOwnershipToken : NSObject <BSDebugDescriptionProviding> {
    NSMutableSet *_environmentsPendingInvalidation;
    BOOL _hasInvalidated;
    NSString *_ownerClass;
    long long _owningInterfaceElementCategory;
    void *_ownerPointer;
    unsigned long long _scope;
    NSSet *_environments;
    BKSHIDEventDeferringTarget *_target;
    NSString *_reason;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)dealloc;

@end
