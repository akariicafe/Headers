@class NSString, PREditorColorPalette, NSArray;

@interface PREditorColorPickerConfiguration : NSObject <BSDescriptionStreamable, BSXPCSecureCoding, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long context;
@property (readonly) BOOL includesObjectsOfTypePRPickerColor;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) PREditorColorPalette *colorPalette;
@property (copy, nonatomic) NSArray *suggestedColors;
@property (copy, nonatomic) id selectedColor;
@property (nonatomic) BOOL showsSlider;
@property (nonatomic) unsigned long long colorWellDisplayMode;
@property (copy, nonatomic) NSString *prompt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 prompt:(id)a1 selectedColor:(id)a2 suggestedColors:(id)a3 colorPalette:(id)a4 colorWellDisplayMode:(unsigned long long)a5 showsSlider:(BOOL)a6 context:(unsigned long long)a7;
- (void)encodeWithBSXPCCoder:(id)a0;
- (void)didUpdateColors;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
