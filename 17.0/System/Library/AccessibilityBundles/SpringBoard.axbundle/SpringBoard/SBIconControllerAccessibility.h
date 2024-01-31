@interface SBIconControllerAccessibility : __SBIconControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)init;
- (void)_axShowTodayView;
- (id)_axGrabbedIcons;
- (BOOL)_axIsShowingHomeScreenTodayView;
- (BOOL)_accessibilityCloseOpenFolder;
- (long long)_accessibilityCurrentPageIndex;
- (long long)_accessibilityIconListCount;
- (long long)_accessibilityIconListIndex;
- (void)_accessibilityMarkIconAsAnimating:(id)a0;
- (void)_accessibilityStatusChanged;
- (void)_accessibilitySwitchControlStatusChanged;
- (void)_accessibilityVoiceOverStatusChanged;
- (id)_axCurrentPageControl;
- (id)_axGrabbedIconView;
- (id)_axGrabbedIconsLabel;
- (void)_axHideAppLibrary;
- (void)_axHideTodayView;
- (id)_axIconScrollView;
- (BOOL)_axIsIconDragging;
- (BOOL)_axIsShowingAppLibrary;
- (BOOL)_axIsSidebarPinned;
- (id)_axLabelForIcons:(id)a0;
- (BOOL)_axNeedsToDismissHomeScreenTodayView;
- (id)_axRecipientIconView;
- (void)_axShowAppLibrary;

@end
