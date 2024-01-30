@class UIColor, NSString, NSMutableSet, _UILegibilitySettings;

@interface CSAppearance : NSObject <BSDescriptionProviding, CSAppearanceProviding, NSCopying>

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic, getter=isTransitional) BOOL transitional;
@property (nonatomic) long long backgroundStyle;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) NSMutableSet *components;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *appearanceIdentifier;

+ (id)appearanceForProvider:(id)a0;
+ (id)appearanceWithIdentifier:(id)a0;

- (void)addComponent:(id)a0;
- (void)conformsToCSAppearanceProviding;
- (long long)flagForComponentType:(long long)a0;
- (void)removeComponent:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)reset;
- (id)succinctDescription;
- (id)initWithIdentifier:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)unionAppearance:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (id)componentForType:(long long)a0 identifier:(id)a1;
- (void)removeAllComponentsWithIdentifier:(id)a0;
- (id)componentForType:(long long)a0 property:(unsigned long long)a1;
- (BOOL)isEqualToAppearance:(id)a0;

@end
