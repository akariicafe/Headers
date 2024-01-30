@class PSSpecifier;

@interface STAllowPhotoRestrictionsController : PUIPhotosPrivacyController {
    PSSpecifier *_allowedGroup;
}

- (id)specifiers;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
