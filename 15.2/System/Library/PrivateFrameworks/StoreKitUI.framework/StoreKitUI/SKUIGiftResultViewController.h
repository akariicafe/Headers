@class UIButton, UIImage, SKUIGiftItemView;

@interface SKUIGiftResultViewController : SKUIGiftStepViewController {
    UIButton *_giftAgainButton;
    UIImage *_itemImage;
    SKUIGiftItemView *_itemView;
}

- (void)viewWillAppear:(BOOL)a0;
- (id)_itemView;
- (void)loadView;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_itemImage;
- (id)initWithGift:(id)a0 configuration:(id)a1;
- (void)_setItemImage:(id)a0 error:(id)a1;
- (void)_giftAgainAction:(id)a0;
- (void)_doneButtonAction:(id)a0;

@end
