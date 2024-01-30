@class UIFont, NSArray, NSString, UILabel, MFPopupButtonItem;
@protocol MFPopupButtonDelegate;

@interface MFPopupButton : UIControl <UIContextMenuInteractionDelegate>

@property (readonly, nonatomic) UILabel *label;
@property (weak, nonatomic) id<MFPopupButtonDelegate> delegate;
@property (copy, nonatomic) MFPopupButtonItem *selectedItem;
@property (copy, nonatomic) NSArray *items;
@property (retain, nonatomic) UIFont *font;
@property (readonly, nonatomic) BOOL canPresentMenu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)sizeToFit;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)dismissMenu;
- (struct CGPoint { double x0; double x1; })menuAttachmentPointForConfiguration:(id)a0;
- (void)_updateUI;
- (void)_didSelectItem:(id)a0;
- (id)_actionForItem:(id)a0;
- (void)contextMenuInteraction:(id)a0 willDisplayMenuForConfiguration:(id)a1 animator:(id)a2;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
