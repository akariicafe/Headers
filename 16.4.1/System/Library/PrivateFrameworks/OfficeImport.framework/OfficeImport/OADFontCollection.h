@class NSMutableDictionary;

@interface OADFontCollection : OADBaseFontCollection {
    NSMutableDictionary *_scriptToFontMap;
}

- (BOOL)isEmpty;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)scripts;
- (id)fontForScript:(id)a0;
- (BOOL)isEqualToFontCollection:(id)a0;
- (void)setFont:(id)a0 forScript:(id)a1;

@end
