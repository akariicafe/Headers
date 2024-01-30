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

- (id)initWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (double)preferredHeightForWidth:(double)a0 inTableView:(id)a1;
- (double)preferredHeightForWidth:(double)a0;
- (void)layoutForWidth:(double)a0 inTableView:(id)a1;
- (void)layoutSubviews;
- (id)generalExplanationItemString;

@end
