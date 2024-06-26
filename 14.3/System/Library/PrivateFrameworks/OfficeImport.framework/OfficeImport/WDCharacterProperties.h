@class WDDocument, WDCharacterPropertiesValues;

@interface WDCharacterProperties : NSObject {
    BOOL mOriginal;
    BOOL mTracked;
    BOOL mResolved;
    WDCharacterPropertiesValues *mOriginalProperties;
    WDCharacterPropertiesValues *mTrackedProperties;
}

@property (readonly, weak) WDDocument *document;

+ (SEL)fontSelectorForFontType:(int)a0;
+ (SEL)fontOverriddenSelectorForFontType:(int)a0;
+ (SEL)setFontSelectorForFontType:(int)a0;

- (short)position;
- (short)spacing;
- (int)shadow;
- (void)setFontSize:(unsigned short)a0;
- (int)highlightColor;
- (void)setHighlightColor:(int)a0;
- (void)setKerning:(unsigned short)a0;
- (int)outline;
- (id)border;
- (int)bold;
- (id)font;
- (int)caps;
- (int)hidden;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)ole2;
- (unsigned short)fontSize;
- (void)setFont:(id)a0;
- (void)setEdited:(int)a0;
- (id)initWithDocument:(id)a0;
- (void)setHidden:(int)a0;
- (void)setVerticalAlign:(int)a0;
- (id)color;
- (int)italic;
- (id)description;
- (id)baseStyle;
- (void)setColor:(id)a0;
- (id)underlineColor;
- (void)setUnderlineColor:(id)a0;
- (void)setOutline:(int)a0;
- (id)symbolFont;
- (void)setPosition:(short)a0;
- (int)edited;
- (void)setUnderline:(int)a0;
- (void)setBold:(int)a0;
- (void)setShadow:(int)a0;
- (void)setTextScale:(unsigned short)a0;
- (unsigned short)textScale;
- (void)setDeleted:(int)a0;
- (int)verticalAlign;
- (void)setHighlight:(BOOL)a0;
- (int)rightToLeft;
- (unsigned short)kerning;
- (void)setSpacing:(short)a0;
- (int)deleted;
- (id)shading;
- (void)setBaseStyle:(id)a0;
- (int)imprint;
- (void)setOutlineColor:(id)a0;
- (id)outlineColor;
- (int)underline;
- (id)deletionDate;
- (void)setDeletionDate:(id)a0;
- (int)emphasisMark;
- (void)setEmphasisMark:(int)a0;
- (void)setCaps:(int)a0;
- (id)reflection;
- (BOOL)isDeletedOverridden;
- (BOOL)isHiddenOverridden;
- (BOOL)isBaseStyleOverridden;
- (BOOL)isRightToLeftOverridden;
- (BOOL)isShadingOverridden;
- (int)languageForDefaultText;
- (BOOL)isFontOverridden;
- (id)fontForFontType:(int)a0;
- (BOOL)isBoldOverridden;
- (BOOL)isItalicOverridden;
- (BOOL)isStrikeThroughOverridden;
- (int)strikeThrough;
- (BOOL)isDoubleStrikeThroughOverridden;
- (int)doubleStrikeThrough;
- (BOOL)isFontSizeOverridden;
- (BOOL)isVerticalAlignOverridden;
- (BOOL)isUnderlineOverridden;
- (BOOL)isSmallCapsOverridden;
- (int)smallCaps;
- (BOOL)isCapsOverridden;
- (BOOL)isColorOverridden;
- (void)setItalic:(int)a0;
- (void)setRightToLeft:(int)a0;
- (void)setSymbolFont:(id)a0;
- (BOOL)isAnythingOverridden;
- (void)setResolveMode:(int)a0;
- (int)resolveMode;
- (void)setFormattingChanged:(int)a0;
- (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)a0;
- (BOOL)isFormattingChangedOverridden;
- (int)formattingChanged;
- (BOOL)isIndexToAuthorIDOfFormattingChangeOverridden;
- (unsigned short)indexToAuthorIDOfFormattingChange;
- (void)setExtendedFont:(id)a0;
- (void)setFarEastFont:(id)a0;
- (id)mutableShading;
- (BOOL)isAnythingOverriddenIn:(id)a0;
- (id)mutableBorder;
- (BOOL)isBorderOverridden;
- (id)extendedFont;
- (BOOL)isExtendedFontOverridden;
- (id)farEastFont;
- (BOOL)isFarEastFontOverridden;
- (BOOL)isSymbolFontOverridden;
- (BOOL)isSymbolCharacterOverridden;
- (unsigned short)symbolCharacter;
- (void)setSymbolCharacter:(unsigned short)a0;
- (int)reverseBooleanProperty:(int)a0;
- (int)boldForBiText;
- (void)setBoldForBiText:(int)a0;
- (int)italicForBiText;
- (void)setItalicForBiText:(int)a0;
- (BOOL)isOutlineColorOverridden;
- (float)outline2010Width;
- (BOOL)isOutline2010WidthOverridden;
- (void)setOutline2010Width:(float)a0;
- (int)embossed;
- (void)setEmbossed:(int)a0;
- (void)setImprint:(int)a0;
- (BOOL)isUnderlineColorOverridden;
- (void)setStrikeThrough:(int)a0;
- (void)setDoubleStrikeThrough:(int)a0;
- (void)setLigature:(int)a0;
- (void)setSmallCaps:(int)a0;
- (void)setLowerCase:(BOOL)a0;
- (BOOL)isSpacingOverridden;
- (BOOL)isPositionOverridden;
- (BOOL)isKerningOverridden;
- (BOOL)isTextScaleOverridden;
- (void)setColorAuto:(BOOL)a0;
- (BOOL)isLanguageForDefaultTextOverridden;
- (void)setLanguageForDefaultText:(int)a0;
- (void)setSpecialCharacter:(BOOL)a0;
- (void)setListCharacterPictureBullet:(BOOL)a0;
- (BOOL)isLanguageForFarEastOverridden;
- (int)languageForFarEast;
- (void)setLanguageForFarEast:(int)a0;
- (BOOL)isLanguageForBiTextOverridden;
- (int)languageForBiText;
- (void)setLanguageForBiText:(int)a0;
- (BOOL)isFontSizeForBiTextOverridden;
- (unsigned short)fontSizeForBiText;
- (void)setFontSizeForBiText:(unsigned short)a0;
- (BOOL)isBoldForBiTextOverridden;
- (BOOL)isItalicForBiTextOverridden;
- (BOOL)isOutlineOverridden;
- (BOOL)isEmbossedOverridden;
- (BOOL)isImprintOverridden;
- (BOOL)isShadowOverridden;
- (BOOL)isLigatureOverridden;
- (int)ligature;
- (BOOL)isHighlightOverridden;
- (BOOL)isHighlight;
- (BOOL)isHighlightColorOverridden;
- (BOOL)isLowerCaseOverridden;
- (BOOL)isLowerCase;
- (BOOL)isEmphasisMarkOverridden;
- (BOOL)isColorAutoOverridden;
- (BOOL)isColorAuto;
- (BOOL)isSpecialCharacterOverridden;
- (BOOL)isSpecialCharacter;
- (BOOL)isListCharacterPictureBulletOverridden;
- (BOOL)isListCharacterPictureBullet;
- (BOOL)isCharPositionOfPictureBulletInBookmarkOverridden;
- (int)charPositionOfPictureBulletInBookmark;
- (void)setCharPositionOfPictureBulletInBookmark:(int)a0;
- (id)shadow2010;
- (float)shadow2010Opacity;
- (int)fontHint;
- (void)setFontHint:(int)a0;
- (void)setShadow2010Opacity:(float)a0;
- (void)setReflection:(id)a0;
- (void)setShadow2010:(id)a0;
- (int)useCsFont;
- (void)setUseCsFont:(int)a0;
- (unsigned short)indexToAuthorIDOfDeletion;
- (void)setIndexToAuthorIDOfDeletion:(unsigned short)a0;
- (unsigned short)indexToAuthorIDOfEdit;
- (void)setIndexToAuthorIDOfEdit:(unsigned short)a0;
- (id)editDate;
- (void)setEditDate:(id)a0;
- (BOOL)deletionDifferentFrom:(id)a0 mode:(int)a1;
- (BOOL)editDifferentFrom:(id)a0 mode:(int)a1;
- (BOOL)formattingChangedDifferentFrom:(id)a0 mode:(int)a1;
- (BOOL)embeddedObject;
- (void)setEmbeddedObject:(BOOL)a0;
- (void)setOle2:(BOOL)a0;
- (int)objectIDForOle2;
- (void)setObjectIDForOle2:(int)a0;
- (int)offsetToPictureData;
- (void)setOffsetToPictureData:(int)a0;
- (BOOL)horizontalInVertical;
- (void)setHorizontalInVertical:(BOOL)a0;
- (BOOL)compressHorizontalInVertical;
- (void)setCompressHorizontalInVertical:(BOOL)a0;
- (BOOL)twoLinesInOne;
- (void)setTwoLinesInOne:(BOOL)a0;
- (int)bracketTwoLinesInOne;
- (void)setBracketTwoLinesInOne:(int)a0;
- (void)negateFormattingChangesWithDefaults:(id)a0;
- (void)applyPropertiesFrom:(id)a0 ifOverriddenIn:(id)a1;
- (void)removeEmptyFormattingChanges:(id)a0;
- (void)clearBaseStyle;
- (BOOL)isFontOverriddenForFontType:(int)a0;
- (void)setFont:(id)a0 forFontType:(int)a1;
- (BOOL)isFontHintOverridden;
- (BOOL)isShadow2010OpacityOverridden;
- (BOOL)isReflectionOverridden;
- (BOOL)isShadow2010Overridden;
- (BOOL)isUseCsFontOverridden;
- (BOOL)isEditedOverridden;
- (BOOL)isIndexToAuthorIDOfDeletionOverridden;
- (BOOL)isIndexToAuthorIDOfEditOverridden;
- (BOOL)isDeletionDateOverridden;
- (BOOL)isEditDateOverridden;
- (BOOL)deletionDifferentFrom:(id)a0;
- (BOOL)editDifferentFrom:(id)a0;
- (BOOL)formattingChangedDifferentFrom:(id)a0;
- (BOOL)isEmbeddedObjectOverridden;
- (BOOL)isOle2Overridden;
- (BOOL)isObjectIDForOle2Overridden;
- (BOOL)isOffsetToPictureDataOverridden;
- (BOOL)isHorizontalInVerticalOverridden;
- (BOOL)isCompressHorizontalInVerticalOverridden;
- (BOOL)isTwoLinesInOneOverridden;
- (BOOL)isBracketTwoLinesInOneOverridden;
- (void)copyPropertiesInto:(id)a0;
- (BOOL)isBooleanProbablyDifferent:(unsigned char)a0 than:(unsigned char)a1;

@end
