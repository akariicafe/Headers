@class NSString;
@protocol PFParallaxLayoutConfiguration;

@interface PFParallaxLayoutConcreteConfiguration : NSObject <PFParallaxLayoutConfiguration, NSSecureCoding>

@property (class, readonly, nonatomic) id<PFParallaxLayoutConfiguration> deviceConfiguration;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct CGSize { double width; double height; } screenSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } timeRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } inactiveTimeRect;
@property (readonly, nonatomic) struct CGSize { double width; double height; } parallaxPadding;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } unsafeRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } timeOverlapCheckTop;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } timeOverlapCheckBottom;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } parallaxPaddingPct;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bestConfigurationForScreenSize:(struct CGSize { double x0; double x1; })a0;
+ (id)bestConfigurationForScreenSize:(struct CGSize { double x0; double x1; })a0 startingWithConfiguration:(id)a1;
+ (id)configurationWithDeviceName:(id)a0;
+ (id)dictionaryFromLayoutConfiguration:(id)a0;
+ (id)genericConfiguration;
+ (id)knownDeviceConfigurations;
+ (id)layoutConfigurationFromDictionary:(id)a0 error:(id *)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithLayoutConfiguration:(id)a0;
- (id)initWithScreenSize:(struct CGSize { double x0; double x1; })a0 denormalizedYDownTimeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 parallaxPadding:(struct CGSize { double x0; double x1; })a2;
- (id)initWithScreenSize:(struct CGSize { double x0; double x1; })a0 normalizedTimeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 parallaxPadding:(struct CGSize { double x0; double x1; })a2;
- (id)initWithScreenSize:(struct CGSize { double x0; double x1; })a0 normalizedYDownTimeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 parallaxPadding:(struct CGSize { double x0; double x1; })a2;
- (id)initWithScreenSize:(struct CGSize { double x0; double x1; })a0 timeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inactiveTimeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 parallaxPadding:(struct CGSize { double x0; double x1; })a3;
- (BOOL)isEqualToLayoutConfiguration:(id)a0;

@end
