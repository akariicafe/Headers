@class NSArray, NSString;

@interface NTKLabelCache : NSObject {
    NSArray *_supportedLanguageCodes;
    NSString *_currentLanguageCode;
}

+ (id)sharedCache;

- (id)init;
- (BOOL)setCurrentLanguageCode:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)_localeChanged;
- (void)_legacy_removeOldAtlases;
- (id)_loadTextureForDevice:(id)a0 withName:(id)a1;
- (id)_nameForFaceStyle:(long long)a0;
- (BOOL)forceLocaleUpdate;
- (id)labelForDevice:(id)a0 text:(id)a1 font:(long long)a2 modifier:(id)a3 padWithZeroes:(BOOL)a4 filter:(BOOL)a5;
- (id)labelForDevice:(id)a0 faceStyle:(long long)a1 number:(unsigned long long)a2 fontSize:(double)a3 paddedWithZeros:(BOOL)a4;

@end
