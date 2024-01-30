@class SBSRemoteAlertPresentationTargetPredicate, BSProcessHandle, NSString;

@interface SBSRemoteAlertPresentationTarget : NSObject <BSDescriptionProviding, BSXPCCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) SBSRemoteAlertPresentationTargetPredicate *targetPredicate;
@property (readonly, nonatomic) BSProcessHandle *targetProcess;
@property (nonatomic) BOOL shouldDismissOnUILock;
@property (nonatomic) BOOL shouldDismissInSwitcher;
@property (nonatomic) BOOL requiresFullscreenPresentation;
@property (copy, nonatomic) NSString *scenePersistentIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithXPCDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithCoder:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)initWithTargetProcess:(id)a0;
- (id)initWithTargetPredicate:(id)a0;

@end
