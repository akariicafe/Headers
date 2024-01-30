@interface WDVideoURLManager : NSObject

+ (id)_baseURLForIdentifier:(id)a0;
+ (void)_fetchPreferredURLForIdentifier:(id)a0 completion:(id /* block */)a1;
+ (void)_fetchRawManifestForIdentifier:(id)a0 completion:(id /* block */)a1;
+ (id)_parseJSON:(id)a0;
+ (void)fetchURLForVideoWithIdentifier:(id)a0 handler:(id /* block */)a1;
+ (BOOL)isVideoPlaybackEnabled;
+ (id)preferredLanguageFromLanguages:(id)a0 languagePreferences:(id)a1;

@end
