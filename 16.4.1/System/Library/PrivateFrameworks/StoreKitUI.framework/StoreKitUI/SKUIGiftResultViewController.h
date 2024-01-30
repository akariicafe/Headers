@class UIButton, UIImage, SKUIGiftItemView;

@interface SKUIGiftResultViewController : SKUIGiftStepViewController {
    UIButton *_giftAgainButton;
    UIImage *_itemImage;
    SKUIGiftItemView *_itemView;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (id)_itemView;
- (id)_itemImage;
- (void)_doneButtonAction:(id)a0;
- (void)_giftAgainAction:(id)a0;
- (void)_setItemImage:(id)a0 error:(id)a1;
- (id)initWithGift:(id)a0 configuration:(id)a1;

@end
