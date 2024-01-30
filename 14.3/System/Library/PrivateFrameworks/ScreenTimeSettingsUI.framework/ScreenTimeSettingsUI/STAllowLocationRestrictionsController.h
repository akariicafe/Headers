@class PSSpecifier;

@interface STAllowLocationRestrictionsController : PUILocationServicesListController {
    PSSpecifier *_allowedGroup;
}

- (void).cxx_destruct;
- (id)specifiers;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
