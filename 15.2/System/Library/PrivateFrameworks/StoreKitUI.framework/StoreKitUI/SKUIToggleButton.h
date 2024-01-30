@class SKUIButtonViewElement, NSString, SKUIAttributedStringLayout;
@protocol SKUIToggleButtonDelegate;

@interface SKUIToggleButton : SKUIStyledButton <SKUIToggleItemStateCenterObserver> {
    NSString *_itemIdentifier;
    SKUIAttributedStringLayout *_nonToggledLayout;
    NSString *_titleToggleString;
    SKUIAttributedStringLayout *_toggledLayout;
}

@property (nonatomic) long long autoIncrementCount;
@property (nonatomic) long long count;
@property (weak, nonatomic) SKUIButtonViewElement *element;
@property (retain, nonatomic) NSString *toggleItemIdentifier;
@property (retain, nonatomic) NSString *nonToggledTitle;
@property (retain, nonatomic) NSString *toggledTitle;
@property (retain, nonatomic) id nonToggledContents;
@property (retain, nonatomic) id toggledContents;
@property (nonatomic) long long toggleButtonType;
@property (nonatomic, getter=isToggled) BOOL toggled;
@property (nonatomic) BOOL autoIncrement;
@property (weak, nonatomic) id<SKUIToggleButtonDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (id)_titleAttributes;
- (void)dealloc;
- (void)setToggled:(BOOL)a0 animated:(BOOL)a1;
- (void)setButtonTitleText:(id)a0;
- (void)itemStateCenter:(id)a0 itemStateChanged:(id)a1;
- (id)_toggledLayout;
- (id)_nonToggledLayout;
- (void)_showToggleState:(BOOL)a0;
- (id)_layoutForString:(id)a0;
- (void)_sendWillAnimate;
- (void)_sendDidAnimate;

@end
