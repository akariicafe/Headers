@class UINavigationItem;

@interface VideosUI.LibraryFamilyMembersViewController : VUIBaseViewController <VUIFamilyMembersViewControllerDelegate> {
    void /* unknown type, empty encoding */ familyController;
}

@property (nonatomic, readonly) UINavigationItem *navigationItem;

- (void)familyMemberViewController:(id)a0 didSelectFamilyMember:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)vui_viewDidLayoutSubviews;
- (void)vui_viewDidLoad;

@end
