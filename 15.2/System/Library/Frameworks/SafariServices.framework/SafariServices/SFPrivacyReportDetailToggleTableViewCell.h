@class UILabel, UISegmentedControl;
@protocol SFPrivacyReportDetailToggleTableViewCellDelegate;

@interface SFPrivacyReportDetailToggleTableViewCell : UITableViewCell {
    UISegmentedControl *_segmentedControl;
    UILabel *_titleLabel;
}

@property (nonatomic) long long detailType;
@property (weak, nonatomic) id<SFPrivacyReportDetailToggleTableViewCellDelegate> delegate;
@property (nonatomic) BOOL useCurrentWebsiteHeader;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_updateTitle;
- (void).cxx_destruct;
- (void)_addSegmentForDetailType:(long long)a0;
- (void)_selectDetailType:(long long)a0;

@end
