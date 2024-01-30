@class NSMutableArray, PSSpecifier;

@interface ContactsShortNameController : PSListController {
    PSSpecifier *_shortNameEnabledSpecifier;
    PSSpecifier *_shortNameFormatsGroup;
    NSMutableArray *_shortNameFormatsSpecifiers;
}

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)setShortNameFormat:(id)a0;
- (id)specifiers;
- (void).cxx_destruct;
- (id)shortNameFormat;
- (id)preferNicknames;
- (void)setPreferNicknames:(id)a0;
- (void)setShortNameEnabled:(id)a0;
- (id)shortNameEnabled;

@end
