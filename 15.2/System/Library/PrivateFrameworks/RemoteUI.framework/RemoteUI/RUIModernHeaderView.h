@class UILabel, NSString;

@interface RUIModernHeaderView : OBHeaderView <RUIHeader>

@property (retain, nonatomic) UILabel *headerLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) NSString *detailText;
@property (retain, nonatomic) NSString *subHeaderText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)headerHeightForWidth:(double)a0 inView:(id)a1;
- (void)setSubHeaderText:(id)a0 attributes:(id)a1;
- (double)bottomPadding;
- (id)initWithTitle:(id)a0;
- (void)setIconImage:(id)a0;
- (void)updateDetailText;
- (double)iconHeight;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2;
- (double)iconToHeaderLabelPadding;
- (double)topPadding;
- (void)setText:(id)a0 attributes:(id)a1;
- (void)setDetailText:(id)a0 attributes:(id)a1;
- (id)initWithAttributes:(id)a0;

@end
