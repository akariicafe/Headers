@class BTSDevice;

@interface AccessorySubController : PSListItemsController {
    BTSDevice *_currentDevice;
}

- (id)specifiers;
- (void).cxx_destruct;
- (id)init;
- (void)listItemSelected:(id)a0;
- (void)dealloc;

@end
