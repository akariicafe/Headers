@class NSString, NSMutableSet, _UILegibilitySettings;

@interface CSAppearance : NSObject <BSDescriptionProviding, CSAppearanceProviding, NSCopying>

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic, getter=isTransitional) BOOL transitional;
@property (copy, nonatomic) NSMutableSet *components;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *appearanceIdentifier;

+ (id)appearanceWithIdentifier:(id)a0;
+ (id)appearanceForProvider:(id)a0;

- (void)addComponent:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqualToAppearance:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (void)removeComponent:(id)a0;
- (void)conformsToCSAppearanceProviding;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)componentForType:(long long)a0 property:(unsigned long long)a1;
- (BOOL)isEqual:(id)a0;
- (void)removeAllComponentsWithIdentifier:(id)a0;
- (long long)flagForComponentType:(long long)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)unionAppearance:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (id)componentForType:(long long)a0 identifier:(id)a1;

@end
