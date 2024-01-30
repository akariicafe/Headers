@class UIColor, NSString, UIView, NSNumber, _UILegibilitySettings;

@interface CSComponent : NSObject <NSCopying>

@property (nonatomic) unsigned long long properties;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long priority;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic) long long flag;
@property (copy, nonatomic) NSString *string;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) NSNumber *value;
@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) unsigned long long transitionModifiers;
@property (nonatomic) struct { double duration; struct CGPoint { double x; double y; } targetOffset; double targetScale; double blurRadius; unsigned long long level; } transitionInputs;
@property (nonatomic) double alpha;
@property (nonatomic) struct CGPoint { double x; double y; } offset;
@property (nonatomic) double scale;
@property (nonatomic) double animationDuration;
@property (nonatomic) double blurRadius;
@property (nonatomic) unsigned long long level;

+ (id)dateView;
+ (id)statusBar;
+ (id)content;
+ (id)quickActions;
+ (id)background;
+ (id)homeAffordance;
+ (id)pageControl;
+ (id)pageContent;
+ (id)whitePoint;
+ (id)backgroundContent;
+ (id)wallpaper;
+ (id)tinting;
+ (id)complicationContainer;
+ (id)componentWithType:(long long)a0;
+ (id)controlCenterGrabber;
+ (id)footerCallToActionLabel;
+ (id)footerStatusLabel;
+ (id)modalContent;
+ (id)poseidon;
+ (id)proudLock;
+ (id)remoteInlineContent;
+ (id)slideableContent;
+ (id)statusBarBackground;
+ (id)statusBarGradient;
+ (id)wallpaperFloatingLayer;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)string:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)succinctDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)value:(id)a0;
- (id)description;
- (id)view:(id)a0;
- (void).cxx_destruct;
- (id)scale:(double)a0;
- (id)flag:(long long)a0;
- (BOOL)hasValueForProperty:(unsigned long long)a0;
- (id)hidden:(BOOL)a0;
- (id)offset:(struct CGPoint { double x0; double x1; })a0;
- (id)animationDuration:(double)a0;
- (id)color:(id)a0;
- (id)identifier:(id)a0;
- (id)legibilitySettings:(id)a0;
- (id)priority:(long long)a0;
- (void)resetAllProperties;
- (void)resetProperties:(unsigned long long)a0;
- (id)transitionInputs:(struct { double x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; unsigned long long x4; })a0;
- (id)transitionModifiers:(unsigned long long)a0;

@end
