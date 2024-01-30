@class NSMutableArray;

@interface BCSShareActionPickerItem : BCSActionPickerItem {
    NSMutableArray *_itemsToShare;
}

- (id)initWithAction:(id)a0;
- (id)label;
- (id)icon;
- (void).cxx_destruct;
- (void)performActionWithFBOptions:(id)a0;

@end
