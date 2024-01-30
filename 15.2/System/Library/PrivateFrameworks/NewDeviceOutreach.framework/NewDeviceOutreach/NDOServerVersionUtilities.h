@interface NDOServerVersionUtilities : NSObject

+ (void)_dictionaryFromURL:(id)a0 shouldRetry:(BOOL)a1 withCompletion:(id /* block */)a2;
+ (void)_supportedVersionsForClientAndServer:(unsigned long long)a0 withCompletion:(id /* block */)a1;
+ (void)isHighServerVersionFeaturesetEnabled:(unsigned long long)a0 withCompletion:(id /* block */)a1;
+ (void)serverVersionSupported:(id /* block */)a0;
+ (void)isHighServerVersionFeaturesetEnabled:(id /* block */)a0;
+ (BOOL)isHighServerVersionFeaturesetEnabled;
+ (id)readWebURLOverride;

@end
