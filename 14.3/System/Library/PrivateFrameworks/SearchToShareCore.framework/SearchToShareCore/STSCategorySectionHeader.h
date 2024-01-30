@class NSString, UILabel, UIButton;

@interface STSCategorySectionHeader : UIView {
    UILabel *_titleLabel;
    UIButton *_clearButton;
}

@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL clearButtonHidden;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
