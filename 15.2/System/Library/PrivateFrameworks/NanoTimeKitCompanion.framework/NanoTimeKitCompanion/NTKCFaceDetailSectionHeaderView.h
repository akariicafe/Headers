@class NTKCSeparatorView, NSString, UILabel, UIListContentConfiguration;

@interface NTKCFaceDetailSectionHeaderView : UITableViewHeaderFooterView {
    UILabel *_detailLabel;
    NTKCSeparatorView *_separator;
    UIListContentConfiguration *_configuration;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *groupName;

+ (double)headerHeight;
+ (id)reuseIdentifier;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)init;
- (id)initWithReuseIdentifier:(id)a0;
- (void)_fontSizeDidChange;
- (void)_updateConfig;
- (id)_traitCollectionAdjustedIfNeeded;

@end
