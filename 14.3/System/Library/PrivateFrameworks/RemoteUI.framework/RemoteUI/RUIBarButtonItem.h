@class NSString, UIBarButtonItem;

@interface RUIBarButtonItem : RUIElement {
    UIBarButtonItem *_barButtonItem;
}

@property (copy, nonatomic) id /* block */ action;
@property (readonly, nonatomic) UIBarButtonItem *barButtonItem;
@property (readonly, nonatomic) NSString *itemType;

- (void).cxx_destruct;
- (void)_buttonPressed:(id)a0;
- (id)_labelColor;
- (void)setEnabled:(BOOL)a0;

@end
