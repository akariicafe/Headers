@class NSString, UILabel, NTKCSeparatorView;

@interface NTKCFaceDetailSectionHeaderView : UITableViewHeaderFooterView {
    UILabel *_detailLabel;
    NTKCSeparatorView *_bottomSeparator;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *groupName;

+ (double)headerHeight;
+ (id)reuseIdentifier;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateLabelFonts;
- (id)initWithReuseIdentifier:(id)a0;
- (void)_fontSizeDidChange;
- (id)_traitCollectionAdjustedIfNeeded;

@end
