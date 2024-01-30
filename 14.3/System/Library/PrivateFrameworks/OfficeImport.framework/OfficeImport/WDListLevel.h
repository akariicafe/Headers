@class WDDocument, WDParagraphProperties, WDCharacterProperties, WDOfficeArt, NSMutableString;

@interface WDListLevel : NSObject {
    WDDocument *mDocument;
    WDParagraphProperties *mParagraphProperties;
    WDCharacterProperties *mCharacterProperties;
    WDOfficeArt *mImage;
    long long mStartNumber;
    int mNumberFormat;
    BOOL mRestartNumbering;
    long long mRestartLevel;
    BOOL mLegal;
    int mSuffix;
    NSMutableString *mText;
    BOOL mLegacy;
    long long mLegacySpace;
    long long mLegacyIndent;
    int mJustification;
}

- (int)suffix;
- (void)setLegacy:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)legacy;
- (id)text;
- (void)setSuffix:(int)a0;
- (BOOL)legal;
- (id)initWithDocument:(id)a0;
- (id)description;
- (void)setImage:(id)a0;
- (void)setText:(id)a0;
- (id)image;
- (int)numberFormat;
- (void)setNumberFormat:(int)a0;
- (id)paragraphProperties;
- (id)characterProperties;
- (int)justification;
- (long long)startNumber;
- (BOOL)restartLevelOverridden;
- (long long)restartLevel;
- (void)setRestartNumbering:(BOOL)a0;
- (BOOL)restartNumbering;
- (void)setStartNumber:(long long)a0;
- (void)setJustification:(int)a0;
- (BOOL)startNumberOverridden;
- (BOOL)numberFormatOverridden;
- (BOOL)imageBullet;
- (BOOL)imageBulletOverridden;
- (BOOL)restartNumberingOverridden;
- (BOOL)legalOverridden;
- (BOOL)suffixOverridden;
- (BOOL)textOverridden;
- (long long)legacySpace;
- (long long)legacyIndent;
- (BOOL)justificationOverridden;
- (void)setLegal:(BOOL)a0;
- (void)setRestartLevel:(long long)a0;
- (void)setLegacySpace:(long long)a0;
- (void)setLegacyIndent:(long long)a0;

@end
