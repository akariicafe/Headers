@class NSString, BTSDevice;

@interface AccessoryControlListItemsController : PSListItemsController {
    BTSDevice *_currentDevice;
    struct { BOOL normal; BOOL anc; BOOL transparency; } _listeningModeConfigs;
    NSString *_currentSelectedSpecifier;
}

- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)dealloc;
- (id)specifiers;
- (id)init;
- (void).cxx_destruct;
- (void)listItemSelected:(id)a0;

@end
