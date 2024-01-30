@class NSString, NSDictionary, NSBundle, NSArray, PSSpecifier;

@interface PSPhotoServicesAuthorizationLevelController : PSListItemsController {
    NSArray *_modifySelectionSpecifiers;
    PSSpecifier *_modifySelectionButton;
    NSString *_clientIdentifier;
}

@property (retain, nonatomic) NSDictionary *details;
@property (copy, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSBundle *entityBundle;

- (void)setSpecifier:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)specifiers;
- (void).cxx_destruct;
- (id)_modifySelectionSpecifiers;
- (void)_presentImagePickerForModifyingSelection;
- (id)footerStringForSpecifiers:(id)a0;

@end
