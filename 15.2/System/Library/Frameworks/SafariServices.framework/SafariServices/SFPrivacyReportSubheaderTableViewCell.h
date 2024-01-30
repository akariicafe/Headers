@class NSString, UILabel;

@interface SFPrivacyReportSubheaderTableViewCell : UITableViewCell {
    UILabel *_subheaderLabel;
}

@property (copy, nonatomic) NSString *subheaderText;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;

@end
