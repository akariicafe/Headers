@class NSString, UIColor;

@interface CKActionMenuItemImageView : UIImageView <CKActionMenuItemView> {
    UIColor *_unhighlightedTintColor;
    UIColor *_highlightedTintColor;
    BOOL _enabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnabled:(BOOL)a0 animated:(BOOL)a1;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)updateTintColor;
- (id)initWithImage:(id)a0 tintColor:(id)a1 highlightedTintColor:(id)a2;
- (void)setHighlighted:(BOOL)a0;

@end
