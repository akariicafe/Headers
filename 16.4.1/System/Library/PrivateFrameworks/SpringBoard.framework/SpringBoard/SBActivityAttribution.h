@class NSString, STActivityAttribution;

@interface SBActivityAttribution : NSObject <NSCopying, BSDescriptionProviding> {
    STActivityAttribution *_attribution;
    BOOL _isSystemExecutable;
}

@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) struct { unsigned int x0[8]; } auditToken;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *executableDisplayName;
@property (readonly, copy, nonatomic) NSString *attributionGroup;
@property (readonly, copy, nonatomic) NSString *website;
@property (readonly, nonatomic) BOOL isSystemService;
@property (readonly, copy, nonatomic) NSString *activeEntityBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithSTActivityAttribution:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)hasMatchingAttributedEntity:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_activityAttribution;
- (BOOL)isEqual:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;

@end
