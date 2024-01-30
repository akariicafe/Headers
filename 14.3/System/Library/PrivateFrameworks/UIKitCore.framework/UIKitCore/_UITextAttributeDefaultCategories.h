@class NSString, _UITextAttributeDefaults;

@interface _UITextAttributeDefaultCategories : NSObject <_UITextAttributeDefaultCategories, _UITextAttributeDefaultFontSizes>

@property (readonly, nonatomic) _UITextAttributeDefaults *_generic;
@property (readonly, nonatomic) _UITextAttributeDefaults *_label;
@property (readonly, nonatomic) _UITextAttributeDefaults *_textField;
@property (readonly, nonatomic) _UITextAttributeDefaults *_textView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double _labelFontSize;
@property (readonly, nonatomic) double _buttonFontSize;
@property (readonly, nonatomic) double _systemFontSize;
@property (readonly, nonatomic) double _smallSystemFontSize;

- (id)_textFieldDefaults:(long long)a0;
- (void).cxx_destruct;
- (id)_labelDefaults:(long long)a0;
- (id)initWithUserInterfaceIdiom:(long long)a0;
- (id)_genericDefaults:(long long)a0;

@end
