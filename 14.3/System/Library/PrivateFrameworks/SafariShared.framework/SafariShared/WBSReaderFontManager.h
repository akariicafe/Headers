@class NSArray, NSString;

@interface WBSReaderFontManager : NSObject {
    NSArray *_validatedFonts;
}

@property (readonly) NSArray *fonts;
@property (readonly) NSArray *possibleFonts;
@property (readonly, copy) NSString *languageTag;

- (id)defaultFontForLanguageTag:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)fontWithFontFamilyName:(id)a0;
- (void)updateLanguageTag:(id)a0;
- (void)_fontDownloadDidFinish:(id)a0;

@end
