@class UIButton, UIImage, SKUIGiftItemView;

@interface SKUIGiftResultViewController : SKUIGiftStepViewController {
    UIButton *_giftAgainButton;
    UIImage *_itemImage;
    SKUIGiftItemView *_itemView;
}

- (void).cxx_destruct;
- (id)_itemView;
- (void)dealloc;
- (void)loadView;
- (id)_itemImage;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithGift:(id)a0 configuration:(id)a1;
- (void)_setItemImage:(id)a0 error:(id)a1;
- (void)_giftAgainAction:(id)a0;
- (void)_doneButtonAction:(id)a0;

@end
