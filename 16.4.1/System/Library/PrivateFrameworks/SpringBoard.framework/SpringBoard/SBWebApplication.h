@interface SBWebApplication : SBApplication

+ (id)_webClipIdentifierFromWebAppIdentifier:(id)a0;
+ (id)_webAppIdentifierFromWebClipIdentifier:(id)a0;

- (id)iconIdentifier;
- (BOOL)isWebApplication;
- (BOOL)supportsMultitaskingShelf;

@end
