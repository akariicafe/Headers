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
+ (id)pageControl;
+ (id)statusBar;
+ (id)poseidon;
+ (id)quickActions;
+ (id)footerStatusLabel;
+ (id)statusBarGradient;
+ (id)wallpaper;
+ (id)pageContent;
+ (id)scalableContent;
+ (id)statusBarBackground;
+ (id)proudLock;
+ (id)componentWithType:(long long)a0;
+ (id)footerCallToActionLabel;
+ (id)controlCenterGrabber;
+ (id)slideableContent;
+ (id)homeAffordance;
+ (id)whitePoint;
+ (id)tinting;

- (id)view:(id)a0;
- (id)flag:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)hasValueForProperty:(unsigned long long)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (unsigned long long)hash;
- (id)legibilitySettings:(id)a0;
- (id)description;
- (id)succinctDescriptionBuilder;
- (id)hidden:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void)resetProperties:(unsigned long long)a0;
- (void)resetAllProperties;
- (id)string:(id)a0;
- (id)offset:(struct CGPoint { double x0; double x1; })a0;
- (id)priority:(long long)a0;
- (id)value:(id)a0;
- (id)identifier:(id)a0;

@end
