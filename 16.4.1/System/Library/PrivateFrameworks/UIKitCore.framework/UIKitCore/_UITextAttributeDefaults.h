@class UIColor, UIFont, NSShadow, _UITextAttributeDictionary, NSString, _UIMutableTextAttributeDictionary, NSParagraphStyle;
@protocol _UITextAttributeDefaultCategories;

@interface _UITextAttributeDefaults : NSObject <_UITextAttributeDefaults, NSCopying> {
    _UIMutableTextAttributeDictionary *_attributes;
}

@property (class, readonly, nonatomic) id<_UITextAttributeDefaultCategories> _unspecifiedDefaults;

@property (retain, nonatomic, setter=_setTextColor:) UIColor *_textColor;
@property (retain, nonatomic, setter=_setFont:) UIFont *_font;
@property (retain, nonatomic, setter=_setParagraphStyle:) NSParagraphStyle *_paragraphStyle;
@property (retain, nonatomic, setter=_setShadow:) NSShadow *_shadow;
@property (readonly, copy, nonatomic) _UITextAttributeDictionary *_attributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_getFontSizesForUserInterfaceIdiom:(long long)a0 labelFontSize:(double *)a1 buttonFontSize:(double *)a2 systemFontSize:(double *)a3 smallSystemFontSize:(double *)a4;
+ (id)_defaultsForUserInterfaceIdiom:(long long)a0;

- (id)_init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithFallback:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
