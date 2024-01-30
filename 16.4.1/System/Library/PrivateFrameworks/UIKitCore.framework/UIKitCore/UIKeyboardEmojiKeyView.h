@class NSString, UIKeyboardEmojiKeyDisplayController;
@protocol UIKeyboardEmojiCategoryUpdateDelegate;

@interface UIKeyboardEmojiKeyView : UIKBKeyView <UIKeyboardEmojiCategoryUpdate>

@property (weak, nonatomic) UIKeyboardEmojiKeyDisplayController<UIKeyboardEmojiCategoryUpdateDelegate> *emojiKeyManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)updateToCategory:(long long)a0;
- (long long)updateToCategoryWithOffsetPercentage:(double)a0;

@end
