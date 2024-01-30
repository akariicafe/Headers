@class VUILabel, NSString;

@interface VUIDebugMetricsImpressionTableViewCell : UITableViewCell

@property (retain, nonatomic) VUILabel *nameLabel;
@property (retain, nonatomic) VUILabel *typeLabel;
@property (retain, nonatomic) VUILabel *staticIDLabel;
@property (retain, nonatomic) VUILabel *idLabel;
@property (retain, nonatomic) VUILabel *idTypeLabel;
@property (retain, nonatomic) VUILabel *staticImpressionIdLabel;
@property (retain, nonatomic) VUILabel *impressionIdLabel;
@property (retain, nonatomic) VUILabel *staticImpressionIndexLabel;
@property (retain, nonatomic) VUILabel *impressionIndexLabel;
@property (retain, nonatomic) VUILabel *staticImpressionParentLabel;
@property (retain, nonatomic) VUILabel *impressionParentIdLabel;
@property (retain, nonatomic) VUILabel *impressionParentNameLabel;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *idStr;
@property (copy, nonatomic) NSString *idType;
@property (copy, nonatomic) NSString *impressionId;
@property (copy, nonatomic) NSString *impressionIndex;
@property (copy, nonatomic) NSString *impressionParentId;
@property (copy, nonatomic) NSString *impressionParentName;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;

@end
