@interface ReticleViewAccessibility : __ReticleViewAccessibility_super

@property (readonly, nonatomic) id axFirstLabelElement;
@property (readonly, nonatomic) BOOL axIsFocusedOnRectangle;

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityElements;
- (void)setAlpha:(double)a0;
- (void)setState:(long long)a0;
- (long long)_axReticleState;
- (void)_axAnnounceReticleState;
- (void)_axAnnounceReticleStateAfterDelay;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_axFrameForReticleElement;
- (id)_axHintForReticleElement;
- (id)_axLastAnnouncementForReticleState;
- (id)_axReticleElement;
- (void)_axSetLastAnnouncementForReticleState:(id)a0;
- (void)_axSetReticleElement:(id)a0;
- (id)_axStringForReticleState;
- (unsigned long long)_axTraitsForReticleElement;

@end
