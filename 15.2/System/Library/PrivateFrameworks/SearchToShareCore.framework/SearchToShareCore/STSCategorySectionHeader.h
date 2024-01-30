@class NSString, UILabel, UIButton;

@interface STSCategorySectionHeader : UIView {
    UILabel *_titleLabel;
    UIButton *_clearButton;
}

@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL clearButtonHidden;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)init;

@end
