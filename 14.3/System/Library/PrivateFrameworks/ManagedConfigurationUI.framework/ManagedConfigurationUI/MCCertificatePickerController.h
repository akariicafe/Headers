@interface MCCertificatePickerController : PSListItemsController

- (void)tableView:(id)a0 accessoryButtonTappedForRowWithIndexPath:(id)a1;
- (void)setRowToSelect;
- (id)specifiers;
- (id)navigationTitle;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)_setCellPropertiesOnSpecifier:(id)a0 forCertificate:(struct __SecCertificate { } *)a1;

@end
