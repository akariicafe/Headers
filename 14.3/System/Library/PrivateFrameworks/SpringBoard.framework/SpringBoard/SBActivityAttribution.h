@class NSString, SBApplication;

@interface SBActivityAttribution : NSObject <NSCopying, BSDescriptionProviding> {
    NSString *_executablePath;
    BOOL _isSystemExecutable;
}

@property (readonly, nonatomic) struct { unsigned int val[8]; } auditToken;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) SBApplication *application;
@property (readonly, copy, nonatomic) NSString *attributionGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)initWithSTActivityAttribution:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (void)_prepareDisplayName;

@end
