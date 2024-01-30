@class NSShadow, TVImageLayout, VUITextLayout;

@interface VUIButtonLayout : TVViewLayout

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long titleStyle;
@property (readonly, nonatomic) double cornerRadius;
@property (retain, nonatomic) VUITextLayout *titleLayout;
@property (retain, nonatomic) TVImageLayout *imageLayout;
@property (retain, nonatomic) NSShadow *shadow;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } contentMotionTranslation;

+ (id)standardTitleLayoutWithStyle:(unsigned long long)a0;
+ (id)layoutWithLayout:(id)a0 element:(id)a1 type:(unsigned long long)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(unsigned long long)a0;
- (id)initWithType:(unsigned long long)a0 titleStyle:(unsigned long long)a1;
- (void)_configurePrimaryButton;
- (void)_configureTextualButton;
- (void)_configureProductSecondaryButton;
- (void)_configureImageButton;
- (void)_configureRoundButton;
- (void)_configureBarButtonItem;
- (void)_configureFooterCellButton;

@end
