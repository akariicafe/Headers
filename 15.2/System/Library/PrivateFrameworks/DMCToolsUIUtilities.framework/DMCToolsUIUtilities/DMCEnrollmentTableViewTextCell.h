@class UILabel, UIButton, NSString;

@interface DMCEnrollmentTableViewTextCell : UITableViewCell <DMCEnrollmentTableViewCellDataSource>

@property (retain, nonatomic) UILabel *label;
@property (nonatomic) BOOL bold;
@property (retain, nonatomic) UIButton *button;
@property (nonatomic) long long textAlignment;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *linkText;
@property (copy, nonatomic) id /* block */ linkAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cell;
- (void)layoutSubviews;
- (double)cellHeight;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (double)estimatedCellHeight;
- (id)initWithText:(id)a0 bold:(BOOL)a1;
- (id)_textFontIsBold:(BOOL)a0;
- (BOOL)isMultipleLines:(id)a0;
- (void)_updateTextFont;

@end
