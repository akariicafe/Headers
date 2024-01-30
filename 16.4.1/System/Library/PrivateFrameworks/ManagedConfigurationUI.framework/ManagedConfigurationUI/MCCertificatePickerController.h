@interface MCCertificatePickerController : PSListItemsController

- (id)navigationTitle;
- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 accessoryButtonTappedForRowWithIndexPath:(id)a1;
- (void)setRowToSelect;
- (void)_setCellPropertiesOnSpecifier:(id)a0 forCertificate:(struct __SecCertificate { } *)a1;

@end
