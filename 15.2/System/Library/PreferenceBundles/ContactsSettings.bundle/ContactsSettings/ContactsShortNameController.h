@class NSMutableArray, PSSpecifier;

@interface ContactsShortNameController : PSListController {
    PSSpecifier *_shortNameEnabledSpecifier;
    PSSpecifier *_shortNameFormatsGroup;
    NSMutableArray *_shortNameFormatsSpecifiers;
}

- (id)specifiers;
- (void)setShortNameFormat:(id)a0;
- (id)shortNameFormat;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)setShortNameEnabled:(id)a0;
- (id)shortNameEnabled;
- (void)setPreferNicknames:(id)a0;
- (id)preferNicknames;

@end
