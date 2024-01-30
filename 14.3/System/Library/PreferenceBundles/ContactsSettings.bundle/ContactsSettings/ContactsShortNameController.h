@class NSMutableArray, PSSpecifier;

@interface ContactsShortNameController : PSListController {
    PSSpecifier *_shortNameEnabledSpecifier;
    PSSpecifier *_shortNameFormatsGroup;
    NSMutableArray *_shortNameFormatsSpecifiers;
}

- (void)setShortNameFormat:(id)a0;
- (void).cxx_destruct;
- (id)specifiers;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)shortNameFormat;
- (void)setShortNameEnabled:(id)a0;
- (id)shortNameEnabled;
- (void)setPreferNicknames:(id)a0;
- (id)preferNicknames;

@end
