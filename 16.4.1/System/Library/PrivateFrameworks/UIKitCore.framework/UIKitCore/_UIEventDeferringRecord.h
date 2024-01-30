@class _UIEventDeferringOwnershipToken, NSString, NSMutableSet, _UIEventDeferringDescriptor;
@protocol BSInvalidatable;

@interface _UIEventDeferringRecord : NSObject <BSDebugDescriptionProviding> {
    NSMutableSet *_recreationReasons;
    _UIEventDeferringDescriptor *_descriptor;
    id<BSInvalidatable> _invalidationToken;
    _UIEventDeferringOwnershipToken *_deferringToken;
    void *_recordingManagerPointer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;

@end
