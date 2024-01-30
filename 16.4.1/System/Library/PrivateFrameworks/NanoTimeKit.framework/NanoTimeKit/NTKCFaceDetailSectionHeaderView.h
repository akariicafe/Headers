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
- (id)init;
- (id)initWithReuseIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)_fontSizeDidChange;
- (id)_traitCollectionAdjustedIfNeeded;
- (void)_updateConfig;

@end
