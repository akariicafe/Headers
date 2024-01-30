@class NSCache, NSMutableDictionary, NTKExtragalacticDigitRenderer;

@interface NTKExtragalacticDigitLoader : NSObject {
    NTKExtragalacticDigitRenderer *_digitRenderer;
    NSMutableDictionary *_digits;
    NSCache *_drawInfoCache;
}

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (id)_numberFromString:(id)a0;
- (id)_drawInfoKeyForNumber:(id)a0 style:(unsigned long long)a1;
- (unsigned long long)_glyphColorFromString:(id)a0;
- (void)_loadDigits;
- (unsigned long long)_styleFromString:(id)a0;
- (id)digitDrawInfoForNumber:(id)a0 style:(unsigned long long)a1;

@end
