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

- (BOOL)legacy;
- (void)setLegacy:(BOOL)a0;
- (void)setSuffix:(int)a0;
- (BOOL)legal;
- (id)description;
- (int)suffix;
- (void)setText:(id)a0;
- (void).cxx_destruct;
- (id)text;
- (id)image;
- (id)initWithDocument:(id)a0;
- (void)setImage:(id)a0;
- (int)numberFormat;
- (void)setNumberFormat:(int)a0;
- (id)paragraphProperties;
- (void)setRestartNumbering:(BOOL)a0;
- (BOOL)restartNumbering;
- (void)setStartNumber:(long long)a0;
- (long long)startNumber;
- (void)setJustification:(int)a0;
- (id)characterProperties;
- (BOOL)startNumberOverridden;
- (BOOL)numberFormatOverridden;
- (BOOL)imageBullet;
- (BOOL)imageBulletOverridden;
- (BOOL)restartNumberingOverridden;
- (long long)restartLevel;
- (BOOL)restartLevelOverridden;
- (BOOL)legalOverridden;
- (BOOL)suffixOverridden;
- (BOOL)textOverridden;
- (long long)legacySpace;
- (long long)legacyIndent;
- (BOOL)justificationOverridden;
- (int)justification;
- (void)setLegal:(BOOL)a0;
- (void)setRestartLevel:(long long)a0;
- (void)setLegacySpace:(long long)a0;
- (void)setLegacyIndent:(long long)a0;

@end
