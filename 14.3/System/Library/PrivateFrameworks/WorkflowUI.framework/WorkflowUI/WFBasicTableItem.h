@class NSString, UIImage;

@interface WFBasicTableItem : WFTableItem

@property (copy, nonatomic) NSString *primaryText;
@property (copy, nonatomic) NSString *secondaryText;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) unsigned long long primaryTextStyle;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)configureCell:(id)a0;
- (id)initWithStyle:(long long)a0 primaryText:(id)a1 secondaryText:(id)a2 image:(id)a3;

@end
