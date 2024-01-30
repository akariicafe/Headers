@class BSProcessHandle, LSApplicationIdentity, NSString;

@interface SBSRemoteAlertPresentationTargetPredicate : NSObject <BSDescriptionProviding, BSXPCCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) BSProcessHandle *process;
@property (retain, nonatomic) LSApplicationIdentity *launchingApplicationIdentity;
@property (copy, nonatomic) NSString *scenePersistentIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)predicateForLaunchingApplicationIdentity:(id)a0;
+ (id)predicateForProcess:(id)a0;

- (void)encodeWithXPCDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithCoder:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)_init;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;

@end
