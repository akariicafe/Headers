@class NSString, STActivityAttribution;

@interface SBActivityAttribution : NSObject <NSCopying, BSDescriptionProviding> {
    STActivityAttribution *_attribution;
    NSString *_executablePath;
    BOOL _isSystemExecutable;
}

@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) struct { unsigned int val[8]; } auditToken;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *attributionGroup;
@property (readonly, copy, nonatomic) NSString *bundleIdentifierMatchingDisplayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSBActivityAttribution:(id)a0;
- (BOOL)hasSameProcessAsAttribution:(id)a0;
- (id)_resolvedFormattedString:(id)a0 forApplication:(id)a1;
- (void)_prepareDisplayName;
- (id)initWithSTActivityAttribution:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;

@end
