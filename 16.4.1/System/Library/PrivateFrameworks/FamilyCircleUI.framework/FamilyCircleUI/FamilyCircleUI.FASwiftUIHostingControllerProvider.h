@interface FamilyCircleUI.FASwiftUIHostingControllerProvider : NSObject

+ (id)familyMemberAccountChangePasswordControllerWithMainAccount:(id)a0 memberToShow:(id)a1 familyCircle:(id)a2;
+ (id)getCheckListControllerWithSpecifiers:(id)a0;
+ (id)getFamilyChecklistHeaderView;
+ (id)getFamilySettingsViewControllerWithViewModel:(id)a0 locationModel:(id)a1 pictureStore:(id)a2 appleAccount:(id)a3 accountManager:(id)a4 subscriptionDataLoader:(id)a5 delegate:(id)a6;
+ (id)getLoadingControllerWithCancelAction:(id /* block */)a0;
+ (id)getLocationViewControllerWithViewModel:(id)a0 pictureStore:(id)a1 hackfromObjC:(BOOL)a2;

- (id)init;

@end
