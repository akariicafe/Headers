@class PRPosterColor, NSString, UIView;
@protocol PREditorColorPickerColor;

@interface PREditingColorItem : NSObject

@property (nonatomic) unsigned long long context;
@property (readonly, nonatomic) BOOL pickerRespondsToDisplayColorSelector;
@property (nonatomic, getter=isFromUIKitColorPicker) BOOL fromUIKitColorPicker;
@property (nonatomic, getter=shouldShowSlider) BOOL showsSlider;
@property (readonly, nonatomic) id<PREditorColorPickerColor> pickerColor;
@property (readonly, nonatomic) PRPosterColor *baseColor;
@property (nonatomic) double variation;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) PRPosterColor *color;
@property (readonly, nonatomic) PRPosterColor *displayColor;
@property (retain, nonatomic) UIView *itemView;

+ (id)vibrantMaterialItem;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPickerColor:(id)a0 variation:(double)a1 context:(unsigned long long)a2;

@end
