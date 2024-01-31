@interface SBPIPContainerViewControllerAccessibility : __SBPIPContainerViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityCustomActions;
- (BOOL)accessibilityActivate;
- (void)interactionControllerDidEndAllInteractions:(id)a0 targetWindowScene:(id)a1;
- (void)setNeedsLayoutForInteractionController:(id)a0 traits:(unsigned long long)a1 withReason:(unsigned long long)a2 behavior:(int)a3 completion:(id /* block */)a4;
- (id)_announcementStringForQuadrant:(int)a0;
- (BOOL)_axExpandPIPWindow;
- (BOOL)_axShrinkPIPWindow;
- (BOOL)_axStashPIPWindow;
- (void)_postAnnouncement:(id)a0;
- (int)_quadrantForContentView;

@end
