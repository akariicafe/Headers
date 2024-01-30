@class NSMutableDictionary;

@interface NTKExtragalacticDigitDescription : NSObject {
    NSMutableDictionary *_allGlyphs;
}

- (id)init;
- (void).cxx_destruct;
- (id)glyphsForStyle:(unsigned long long)a0;
- (void)addGlyph:(id)a0 ofStyle:(unsigned long long)a1;

@end
