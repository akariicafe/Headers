@class NSString, UIKeyboardEmojiKeyDisplayController;
@protocol UIKeyboardEmojiCategoryUpdateDelegate;

@interface UIKeyboardEmojiKeyView : UIKBKeyView <UIKeyboardEmojiCategoryUpdate>

@property (nonatomic) UIKeyboardEmojiKeyDisplayController<UIKeyboardEmojiCategoryUpdateDelegate> *emojiKeyManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateToCategory:(long long)a0;
- (long long)updateToCategoryWithOffsetPercentage:(double)a0;

@end
