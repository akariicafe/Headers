@class NSString, NSDictionary;

@interface VTKeywordDetectorAssets : NSObject {
    NSDictionary *_decodedInfo;
}

@property (readonly, nonatomic) NSString *configFile;
@property (readonly, nonatomic) NSString *resourcePath;
@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) NSString *configVersion;
@property (readonly, nonatomic) NSString *categoryKey;
@property (readonly, nonatomic) NSString *locale;

- (void).cxx_destruct;
- (id)_dictionary;
- (id)ctcKwdToPhraseIdMap;
- (id)_decodeJson:(id)a0;
- (id)initWithAssetPath:(id)a0 categoryKey:(id)a1 forLocale:(id)a2;
- (id)VTSecondPassConfigPathNDAPI;
- (BOOL)VTSecondPassConfigPathRecognizerExist;
- (id)VTSecondPassConfigPathRecognizer;
- (id)supportedVTPhrasesInfo;
- (id)_hearstRTModelWithMajorVersion:(unsigned long long)a0 minorVersion:(unsigned long long)a1 locale:(id)a2;
- (id)_getStringForKey:(id)a0 category:(id)a1 default:(id)a2;
- (BOOL)_containsKey:(id)a0 category:(id)a1;
- (id)_getNumberForKey:(id)a0 category:(id)a1 default:(id)a2;
- (float)VTSecondPassRecognizerScoreScaleFactor;
- (id)latestHearstRTModel;
- (BOOL)VTSecondPassUseKeywordSpotting;
- (id)VTSecondPassRecognizerToken;
- (BOOL)_getBoolForKey:(id)a0 category:(id)a1 default:(BOOL)a2;
- (BOOL)_containsCategory:(id)a0;

@end
