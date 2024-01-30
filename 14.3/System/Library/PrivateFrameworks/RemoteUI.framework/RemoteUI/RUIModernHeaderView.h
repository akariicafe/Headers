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

- (id)initWithTitle:(id)a0;
- (id)initWithAttributes:(id)a0;
- (double)topPadding;
- (void).cxx_destruct;
- (void)setIconImage:(id)a0;
- (double)headerHeightForWidth:(double)a0 inView:(id)a1;
- (void)setSubHeaderText:(id)a0 attributes:(id)a1;
- (void)setDetailText:(id)a0 attributes:(id)a1;
- (double)bottomPadding;
- (double)iconHeight;
- (double)iconToHeaderLabelPadding;
- (void)setText:(id)a0 attributes:(id)a1;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2;
- (void)updateDetailText;

@end
