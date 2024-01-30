@interface WDVideoURLManager : NSObject

+ (void)_fetchPreferredURLForIdentifier:(id)a0 completion:(id /* block */)a1;
+ (id)_parseJSON:(id)a0;
+ (id)preferredLanguageFromLanguages:(id)a0 languagePreferences:(id)a1;
+ (id)_baseURLForIdentifier:(id)a0;
+ (void)_fetchRawManifestForIdentifier:(id)a0 completion:(id /* block */)a1;
+ (void)fetchURLForVideoWithIdentifier:(id)a0 handler:(id /* block */)a1;
+ (BOOL)isVideoPlaybackEnabled;

@end
