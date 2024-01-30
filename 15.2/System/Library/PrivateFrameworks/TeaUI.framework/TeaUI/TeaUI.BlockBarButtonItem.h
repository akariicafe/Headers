@class NSString;

@interface TeaUI.BlockBarButtonItem : UIBarButtonItem {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ actionHandler;
    void /* unknown type, empty encoding */ customContentView;
}

@property (nonatomic, copy) NSString *accessibilityLabel;

- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)barButtonItemPressedWithSender:(id)a0;

@end
