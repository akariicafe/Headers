@class NSString, NSDictionary, NSBundle, NSArray, PSSpecifier;

@interface PUIPhotoServicesAuthorizationLevelController : PSListItemsController {
    NSArray *_modifySelectionSpecifiers;
    PSSpecifier *_modifySelectionButton;
}

@property (copy, nonatomic) NSString *serviceKey;
@property (retain, nonatomic) NSDictionary *details;
@property (copy, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSBundle *entityBundle;

- (void)setSpecifier:(id)a0;
- (id)footerStringForSpecifiers:(id)a0;
- (id)_modifySelectionSpecifiers;
- (void)_presentImagePickerForModifyingSelection;
- (void).cxx_destruct;
- (id)specifiers;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
