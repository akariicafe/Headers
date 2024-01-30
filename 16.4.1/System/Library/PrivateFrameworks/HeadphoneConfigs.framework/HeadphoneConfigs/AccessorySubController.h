@class BTSDevice;

@interface AccessorySubController : PSListItemsController {
    BTSDevice *_currentDevice;
}

- (void)dealloc;
- (id)specifiers;
- (id)init;
- (void).cxx_destruct;
- (void)listItemSelected:(id)a0;

@end
