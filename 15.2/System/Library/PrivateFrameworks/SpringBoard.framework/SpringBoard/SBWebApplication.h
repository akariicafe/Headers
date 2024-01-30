@interface SBWebApplication : SBApplication

+ (id)_webAppIdentifierFromWebClipIdentifier:(id)a0;
+ (id)_webClipIdentifierFromWebAppIdentifier:(id)a0;

- (id)iconIdentifier;
- (BOOL)supportsMultitaskingShelf;
- (BOOL)isWebApplication;

@end
