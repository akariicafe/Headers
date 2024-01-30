@class NSString, NSArray, UIFontDescriptor, NSAttributedString;

@interface _UIFontPickerFontInfo : NSObject {
    NSString *_localizedFamilyName;
    NSString *_localizedStyleName;
    double _lineHeight;
    UIFontDescriptor *_fontDescriptor;
    NSAttributedString *_attributedString;
    NSString *_attributedStringContentSize;
    unsigned long long _hasMultipleFaces;
    NSArray *_subInfos;
}

@property (readonly) NSString *familyName;
@property (readonly) NSString *postscriptName;
@property (readonly) NSString *styleName;
@property (readonly) double lineHeight;
@property (readonly) NSAttributedString *attributedString;
@property (readonly) NSString *localizedName;
@property (readonly) NSString *localizedFamilyName;
@property (readonly) UIFontDescriptor *fontDescriptor;
@property (readonly, getter=isFontFamilyAvailable) BOOL fontFamilyAvailable;
@property (readonly) BOOL hasMultipleFaces;
@property (readonly) NSArray *faces;
@property (readonly) _UIFontPickerFontInfo *familyInfo;

+ (id)infoWithFamilyName:(id)a0;
+ (id)infoWithFontDescriptor:(struct __CTFontDescriptor { } *)a0;

- (void).cxx_destruct;
- (id)initWithFamilyName:(id)a0;
- (id)initWithFontDescriptor:(id)a0;
- (id)_sortedFacesByWeight;
- (BOOL)matchesTraits:(unsigned int)a0;
- (unsigned long long)hash;
- (void)_populateLocalizedNamesIfNecessary;
- (id)_fontStringForTraitCollection:(id)a0;
- (void)_updateAttributedStringIfNeeded;
- (BOOL)matchesLanguages:(id)a0;
- (BOOL)matchesFamilyForFontDescriptor:(id)a0;
- (BOOL)matchesFontDescriptor:(id)a0;
- (BOOL)matchesConfiguration:(id)a0;
- (id)faceMatchingDescriptor:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
