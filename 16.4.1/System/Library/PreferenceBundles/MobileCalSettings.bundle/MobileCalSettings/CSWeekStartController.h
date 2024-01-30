@class NSMutableArray, PSSpecifier;

@interface CSWeekStartController : PSListController {
    PSSpecifier *_systemWeekStartGroup;
    PSSpecifier *_systemWeekStartItem;
    PSSpecifier *_customWeekStartGroup;
    NSMutableArray *_customWeekStartItems;
}

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)specifiers;
- (void).cxx_destruct;
- (void)showLanguageAndRegionSettings:(id)a0;

@end
