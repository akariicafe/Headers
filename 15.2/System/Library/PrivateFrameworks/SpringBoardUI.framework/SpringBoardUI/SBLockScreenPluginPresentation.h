@class _UILegibilitySettings;

@interface SBLockScreenPluginPresentation : NSObject <NSCopying>

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } suggestedContentInsets;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)description;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;

@end
