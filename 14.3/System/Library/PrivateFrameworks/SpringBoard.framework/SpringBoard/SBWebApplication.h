@interface SBWebApplication : SBApplication

+ (id)_webClipIdentifierFromWebAppIdentifier:(id)a0;
+ (id)_webAppIdentifierFromWebClipIdentifier:(id)a0;

- (id)iconIdentifier;
- (Class)iconClass;
- (BOOL)isWebApplication;

@end
