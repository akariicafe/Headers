@class UIColor, NSPredicate;

@interface UIFontPickerViewControllerConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, setter=_setHideSearchBar:) BOOL _hideSearchBar;
@property (retain, nonatomic, setter=_setTintColor:) UIColor *_tintColor;
@property (nonatomic) BOOL includeFaces;
@property (nonatomic) BOOL displayUsingSystemFont;
@property (nonatomic) unsigned int filteredTraits;
@property (copy, nonatomic) NSPredicate *filteredLanguagesPredicate;

+ (id)filterPredicateForFilteredLanguages:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
