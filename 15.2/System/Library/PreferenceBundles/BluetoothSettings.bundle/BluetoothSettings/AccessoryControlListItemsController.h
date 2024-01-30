@class BTSDevice;

@interface AccessoryControlListItemsController : PSListItemsController {
    BTSDevice *_currentDevice;
    struct { BOOL normal; BOOL anc; BOOL transparency; } _listeningModeConfigs;
}

- (id)specifiers;
- (void).cxx_destruct;
- (id)init;
- (void)listItemSelected:(id)a0;
- (void)dealloc;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;

@end
