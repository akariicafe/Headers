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

- (void)setLegacy:(BOOL)a0;
- (int)suffix;
- (void)setText:(id)a0;
- (void)setImage:(id)a0;
- (id)text;
- (id)initWithDocument:(id)a0;
- (id)image;
- (id)description;
- (void)setSuffix:(int)a0;
- (void).cxx_destruct;
- (BOOL)legacy;
- (void)setNumberFormat:(int)a0;
- (int)numberFormat;
- (int)justification;
- (void)setJustification:(int)a0;
- (id)paragraphProperties;
- (BOOL)legalOverridden;
- (void)setLegacySpace:(long long)a0;
- (void)setStartNumber:(long long)a0;
- (id)characterProperties;
- (BOOL)imageBullet;
- (BOOL)imageBulletOverridden;
- (BOOL)justificationOverridden;
- (long long)legacyIndent;
- (long long)legacySpace;
- (BOOL)legal;
- (BOOL)numberFormatOverridden;
- (long long)restartLevel;
- (BOOL)restartLevelOverridden;
- (BOOL)restartNumbering;
- (BOOL)restartNumberingOverridden;
- (void)setLegacyIndent:(long long)a0;
- (void)setLegal:(BOOL)a0;
- (void)setRestartLevel:(long long)a0;
- (void)setRestartNumbering:(BOOL)a0;
- (long long)startNumber;
- (BOOL)startNumberOverridden;
- (BOOL)suffixOverridden;
- (BOOL)textOverridden;

@end
