@class NSString, UILabel;

@interface PKPerformActionSelectItemExpiresHeader : UIView {
    UILabel *_leadingLabel;
    UILabel *_trailingLabel;
}

@property (retain, nonatomic) NSString *leadingString;
@property (retain, nonatomic) NSString *trailingString;

- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;

@end
