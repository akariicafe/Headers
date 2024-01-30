@class NSString;

@interface BCSCopyActionPickerItem : BCSActionPickerItem

@property (readonly, copy, nonatomic) NSString *textToCopy;

- (void)performAction;
- (void).cxx_destruct;
- (id)icon;
- (BOOL)isCopyActionItem;
- (id)initWithAction:(id)a0 textToCopy:(id)a1;

@end
