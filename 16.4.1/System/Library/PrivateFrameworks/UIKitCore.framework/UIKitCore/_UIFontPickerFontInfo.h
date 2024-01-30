@class NSNumber, NSString, NSArray, UIFontDescriptor, NSAttributedString;

@interface _UIFontPickerFontInfo : NSObject {
    NSString *_localizedFamilyName;
    NSString *_localizedStyleName;
    double _lineHeight;
    UIFontDescriptor *_fontDescriptor;
    NSAttributedString *_attributedString;
    NSString *_attributedStringContentSize;
    unsigned long long _hasMultipleFaces;
    NSArray *_subInfos;
    BOOL _isSystemFont;
    NSNumber *_canRenderName;
}

@property (readonly) NSString *familyName;
@property (readonly) NSString *postscriptName;
@property (readonly) NSString *styleName;
@property (readonly) double lineHeight;
@property (readonly) NSAttributedString *attributedString;
@property (readonly) NSString *localizedName;
@property (readonly) NSString *localizedFamilyName;
@property (readonly) BOOL fontCanRenderLocalizedName;
@property (readonly) UIFontDescriptor *fontDescriptor;
@property (readonly, getter=isFontFamilyAvailable) BOOL fontFamilyAvailable;
@property (readonly) BOOL hasMultipleFaces;
@property (readonly) NSArray *faces;
@property (readonly) _UIFontPickerFontInfo *familyInfo;
@property (readonly) BOOL isSystemFont;

+ (id)infoWithFamilyName:(id)a0;
+ (id)infoWithFontDescriptor:(struct __CTFontDescriptor { } *)a0;

- (BOOL)matchesConfiguration:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)matchesFamilyForFontDescriptor:(id)a0;
- (void)_updateAttributedStringIfNeeded;
- (id)_fontStringForTraitCollection:(id)a0;
- (void)_populateLocalizedNamesIfNecessary;
- (id)_sortedFacesByWeight;
- (id)displayNameForFont:(id)a0;
- (id)faceMatchingDescriptor:(id)a0;
- (id)initWithFamilyName:(id)a0;
- (id)initWithFontDescriptor:(id)a0;
- (id)initWithFontDescriptor:(id)a0 isSystemFont:(BOOL)a1;
- (id)initWithSystemDefaultFont;
- (BOOL)matchesFontDescriptor:(id)a0;
- (BOOL)matchesLanguages:(id)a0;
- (BOOL)matchesTraits:(unsigned int)a0;

@end
