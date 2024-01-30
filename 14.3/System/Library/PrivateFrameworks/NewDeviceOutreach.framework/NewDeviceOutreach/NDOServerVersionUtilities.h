@interface NDOServerVersionUtilities : NSObject

+ (id)_dictionaryFromURL:(id)a0;
+ (id)_supportedVersionsForClientAndServer:(unsigned long long)a0;
+ (BOOL)isHighServerVersionFeaturesetEnabled:(unsigned long long)a0;
+ (BOOL)serverVersionSupported;
+ (BOOL)isHighServerVersionFeaturesetEnabled;
+ (id)readWebURLOverride;
+ (id)readSerialNumberOverride;

@end
