@class NSString, VUILabel, UIImageView, VUITextLayout, UIImage, VUISeparatorView;

@interface VUIDebugMetricsEventCell : UITableViewCell

@property (retain, nonatomic) VUILabel *eventTypeLabel;
@property (retain, nonatomic) VUITextLayout *eventTypeLabelLayout;
@property (retain, nonatomic) VUILabel *subhead1Label;
@property (retain, nonatomic) VUITextLayout *subhead1LabelLayout;
@property (retain, nonatomic) VUILabel *subhead2Label;
@property (retain, nonatomic) VUITextLayout *subhead2LabelLayout;
@property (retain, nonatomic) VUILabel *subhead3Label;
@property (retain, nonatomic) VUITextLayout *subhead3LabelLayout;
@property (retain, nonatomic) VUILabel *tabNameLabel;
@property (retain, nonatomic) VUITextLayout *tabNameLabelLayout;
@property (retain, nonatomic) UIImageView *tabImageView;
@property (retain, nonatomic) VUISeparatorView *separatorView;
@property (copy, nonatomic) NSString *eventTypeLabelStr;
@property (copy, nonatomic) NSString *subhead1LabelStr;
@property (copy, nonatomic) NSString *subhead2LabelStr;
@property (copy, nonatomic) NSString *subhead3LabelStr;
@property (copy, nonatomic) UIImage *tabImage;
@property (copy, nonatomic) NSString *tabName;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setSubhead1LabelColor:(id)a0;
- (void)setSubhead2LabelColor:(id)a0;
- (void)setSubhead3LabelColor:(id)a0;

@end
