@class NSArray, NSMutableDictionary, SBFluidSwitcherViewControllerAccessibility;

@interface SBFluidSwitcherContentViewAccessibility : __SBFluidSwitcherContentViewAccessibility_super

@property (readonly, nonatomic) BOOL _axSwitcherIsVisible;
@property (readonly, nonatomic) SBFluidSwitcherViewControllerAccessibility *_axSwitcherViewController;
@property (readonly, nonatomic) NSArray *_axAppElements;
@property (readonly, nonatomic) NSMutableDictionary *_axAppElementsDictionary;

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityElements;
- (id)_accessibilityUserTestingChildren;
- (BOOL)_accessibilityCanDrag;
- (BOOL)accessibilityScroll:(long long)a0;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (long long)_accessibilityPageCount;
- (id)_accessibilityParentForFindingScrollParent;
- (void)_axSetElementsArray:(id)a0 dictionary:(id)a1;
- (id)_axMainSwitcher;
- (void)_axAddVisibleItemContainer:(id)a0 forAppLayout:(id)a1;
- (id)_axElementForAppLayout:(id)a0;
- (id)_axElements:(BOOL)a0;
- (void)_axRemoveVisibleItemContainerForAppLayout:(id)a0;
- (BOOL)_axScrollToAppElement:(id)a0;

@end
