@class UIImageView, UILabel;

@interface PUILocationIndicatorExplanationView : UIView <PSHeaderFooterView> {
    UIImageView *_activeIcon;
    UILabel *_activeLabel;
    UIImageView *_recentIcon;
    UILabel *_recentLabel;
    UIImageView *_geofenceIcon;
    UILabel *_geofenceLabel;
    UILabel *_explanationLabel;
}

- (void)layoutSubviews;
- (void)layoutForWidth:(double)a0 inTableView:(id)a1;
- (void).cxx_destruct;
- (double)preferredHeightForWidth:(double)a0;
- (double)preferredHeightForWidth:(double)a0 inTableView:(id)a1;
- (id)initWithSpecifier:(id)a0;
- (id)generalExplanationItemString;

@end
