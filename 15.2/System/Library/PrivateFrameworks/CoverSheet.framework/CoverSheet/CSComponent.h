@class UIColor, NSString, UIView, NSNumber, _UILegibilitySettings;

@interface CSComponent : NSObject <NSCopying>

@property (nonatomic) long long type;
@property (nonatomic) unsigned long long properties;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long priority;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic) long long flag;
@property (nonatomic) struct CGPoint { double x; double y; } offset;
@property (copy, nonatomic) NSString *string;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) NSNumber *value;
@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) double alpha;

+ (id)dateView;
+ (id)tinting;
+ (id)controlCenterGrabber;
+ (id)statusBarBackground;
+ (id)pageControl;
+ (id)quickActions;
+ (id)footerStatusLabel;
+ (id)background;
+ (id)statusBar;
+ (id)componentWithType:(long long)a0;
+ (id)wallpaper;
+ (id)homeAffordance;
+ (id)scalableContent;
+ (id)pageContent;
+ (id)poseidon;
+ (id)whitePoint;
+ (id)footerCallToActionLabel;
+ (id)proudLock;
+ (id)slideableContent;
+ (id)statusBarGradient;

- (id)view:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)string:(id)a0;
- (id)hidden:(BOOL)a0;
- (id)offset:(struct CGPoint { double x0; double x1; })a0;
- (id)succinctDescription;
- (id)description;
- (id)identifier:(id)a0;
- (BOOL)hasValueForProperty:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)priority:(long long)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)color:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (void)resetAllProperties;
- (unsigned long long)hash;
- (id)flag:(long long)a0;
- (id)legibilitySettings:(id)a0;
- (id)value:(id)a0;
- (void)resetProperties:(unsigned long long)a0;

@end
