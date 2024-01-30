@class NSString, NSDictionary, NSBundle, NSArray, PSSpecifier;

@interface PSPhotoServicesAuthorizationLevelController : PSListItemsController {
    NSArray *_modifySelectionSpecifiers;
    PSSpecifier *_modifySelectionButton;
    NSString *_clientIdentifier;
}

@property (retain, nonatomic) NSDictionary *details;
@property (copy, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSBundle *entityBundle;

- (id)specifiers;
- (id)footerStringForSpecifiers:(id)a0;
- (id)_modifySelectionSpecifiers;
- (void)_presentImagePickerForModifyingSelection;
- (void)setSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
