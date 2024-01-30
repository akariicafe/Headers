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

- (id)initWithDocument:(id)a0;
- (void)setDefaultParagraphStyle:(id)a0;
- (id)styles;
- (id)description;
- (id)defaultParagraphStyle;
- (void).cxx_destruct;
- (id)defaultCharacterStyle;
- (id)defaultListStyle;
- (id)styleIdForName:(id)a0;
- (id)paragraphStyleWithStartingName:(id)a0;
- (void)addStyle:(id)a0 name:(id)a1;
- (id)allAliasesForStyleId:(id)a0 name:(id)a1;
- (void)createDefaultStyles;
- (id)createStyleWithId:(id)a0 type:(int)a1;
- (id)createStyleWithName:(id)a0 type:(int)a1;
- (id)defaultCharacterProperties;
- (id)defaultParagraphProperties;
- (id)defaultTableStyle;
- (void)initializeDefaultProperties;
- (void)removeStyleWithId:(id)a0;
- (void)setDefaultCharacterStyle:(id)a0;
- (void)setDefaultListStyle:(id)a0;
- (void)setDefaultTableStyle:(id)a0;
- (void)setName:(id)a0 forId:(id)a1;
- (unsigned long long)styleCount;
- (id)styleIdToName:(id)a0;
- (id)styleNameToUniqueId:(id)a0;
- (id)styleWithId:(id)a0;
- (id)styleWithName:(id)a0;

@end
