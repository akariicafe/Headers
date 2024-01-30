@class NSArray;

@interface SwiftUI.DocumentNavigationItem : UINavigationItem {
    void /* unknown type, empty encoding */ onDismiss;
    void /* unknown type, empty encoding */ documentBrowserButton;
}

@property (nonatomic, copy) NSArray *leftBarButtonItems;

- (id)initWithTitle:(id)a0;
- (void)dismiss:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
