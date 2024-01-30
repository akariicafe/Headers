@class UIFont, NSArray, NSString, MFPopupButtonItem, MFActivityIndicatorLabel;
@protocol MFPopupButtonDelegate;

@interface MFPopupButton : UIControl <UIContextMenuInteractionDelegate>

@property (readonly, nonatomic) MFActivityIndicatorLabel *label;
@property (weak, nonatomic) id<MFPopupButtonDelegate> delegate;
@property (copy, nonatomic) MFPopupButtonItem *selectedItem;
@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSArray *deferredItems;
@property (readonly, nonatomic) NSArray *combinedItems;
@property (retain, nonatomic) UIFont *font;
@property (readonly, nonatomic) BOOL canPresentMenu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateUI;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dismissMenu;
- (void)contextMenuInteraction:(id)a0 willDisplayMenuForConfiguration:(id)a1 animator:(id)a2;
- (void).cxx_destruct;
- (void)updateItem:(id)a0;
- (void)sizeToFit;
- (id)actionForItem:(id)a0;
- (struct CGPoint { double x0; double x1; })menuAttachmentPointForConfiguration:(id)a0;
- (void)disableMenu;
- (void)enableMenu;
- (void)_didSelectItem:(id)a0;

@end
