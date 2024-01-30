@class WDDocument, NSMutableDictionary, WDCharacterProperties, WDParagraphProperties, WDStyle, NSMutableArray;

@interface WDStyleSheet : NSObject {
    NSMutableDictionary *mStyleDictionary;
    WDCharacterProperties *mDefaultCharacterProperties;
    WDParagraphProperties *mDefaultParagraphProperties;
    WDStyle *mDefaultParagraphStyle;
    WDStyle *mDefaultCharacterStyle;
    WDStyle *mDefaultTableStyle;
    WDStyle *mDefaultListStyle;
    NSMutableArray *mStylesInOrder;
    NSMutableDictionary *mIdDictionaryForName;
}

@property (readonly, weak) WDDocument *document;

- (id)styles;
- (void).cxx_destruct;
- (id)initWithDocument:(id)a0;
- (id)description;
- (id)defaultParagraphStyle;
- (void)setDefaultParagraphStyle:(id)a0;
- (id)defaultCharacterProperties;
- (id)defaultTableStyle;
- (id)styleNameToUniqueId:(id)a0;
- (id)styleWithId:(id)a0;
- (id)createStyleWithId:(id)a0 type:(int)a1;
- (void)setDefaultCharacterStyle:(id)a0;
- (void)setDefaultTableStyle:(id)a0;
- (void)setDefaultListStyle:(id)a0;
- (void)addStyle:(id)a0 name:(id)a1;
- (id)defaultCharacterStyle;
- (void)setName:(id)a0 forId:(id)a1;
- (void)initializeDefaultProperties;
- (id)styleIdForName:(id)a0;
- (id)styleWithName:(id)a0;
- (id)createStyleWithName:(id)a0 type:(int)a1;
- (unsigned long long)styleCount;
- (id)paragraphStyleWithStartingName:(id)a0;
- (void)removeStyleWithId:(id)a0;
- (id)defaultParagraphProperties;
- (void)createDefaultStyles;
- (id)defaultListStyle;
- (id)styleIdToName:(id)a0;
- (id)allAliasesForStyleId:(id)a0 name:(id)a1;

@end
