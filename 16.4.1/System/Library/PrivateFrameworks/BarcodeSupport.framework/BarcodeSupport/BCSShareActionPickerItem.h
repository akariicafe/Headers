@class NSMutableArray;

@interface BCSShareActionPickerItem : BCSActionPickerItem {
    NSMutableArray *_itemsToShare;
}

- (id)icon;
- (id)initWithAction:(id)a0;
- (id)label;
- (void).cxx_destruct;
- (BOOL)canGroupInSubmenu;
- (void)performActionWithFBOptions:(id)a0;

@end
