@interface SBHIconManagerAccessibility : __SBHIconManagerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)pushExpandedIcon:(id)a0 location:(id)a1 context:(id)a2 animated:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)setEditing:(BOOL)a0 withFeedbackBehavior:(id)a1;
- (id)createNewFolderFromRecipientIcon:(id)a0 grabbedIcon:(id)a1;
- (void)closeFolderAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)setMainDisplayLibraryViewVisible:(BOOL)a0;
- (void)_axSetCurrentFolderScrollEnabled:(BOOL)a0;

@end
