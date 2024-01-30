@class NSString;

@interface TeaUI.BlockBarButtonItem : UIBarButtonItem {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ actionHandler;
    void /* unknown type, empty encoding */ customContentView;
}

@property (nonatomic, copy) NSString *accessibilityLabel;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)barButtonItemPressedWithSender:(id)a0;

@end
