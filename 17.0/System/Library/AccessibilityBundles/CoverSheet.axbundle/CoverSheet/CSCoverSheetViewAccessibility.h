@interface CSCoverSheetViewAccessibility : __CSCoverSheetViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)scrollViewDidEndScrolling:(id)a0;
- (void)setModalPresentationView:(id)a0;
- (void)layoutSubviews;
- (BOOL)resetScrollViewToMainPageAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (id)_childFocusViews;
- (BOOL)accessibilityScroll:(long long)a0;
- (id)_accessibilityAdditionalElements;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)accessibilityScrollUpPage;
- (id)__axShowNotificationsElement;
- (void)__axSetShowNotificationsElement:(id)a0;
- (void)_axAdjustObscuredContent;
- (BOOL)_axHandleShowNotificationsAction;
- (id)_axNotificationsMasterList;
- (id)_axShowNotificationsElement;

@end
