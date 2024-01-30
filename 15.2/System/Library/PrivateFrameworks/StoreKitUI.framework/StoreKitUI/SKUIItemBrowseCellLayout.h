@class NSString, _SKUIItemBrowseCellContentView, UIColor;

@interface SKUIItemBrowseCellLayout : SKUIItemCellLayout {
    _SKUIItemBrowseCellContentView *_cellContentView;
    UIColor *_primaryTextColor;
    UIColor *_secondaryTextColor;
}

@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSString *indexNumberString;
@property (nonatomic) long long numberOfUserRatings;
@property (nonatomic) double userRating;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *title;
@property (nonatomic, getter=isLargeSpacing) BOOL largeSpacing;
@property (nonatomic) struct CGSize { double width; double height; } imageBoundingSize;

- (void)layoutSubviews;
- (id)initWithTableViewCell:(id)a0;
- (void)setIconImage:(id)a0;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (id)initWithParentView:(id)a0;
- (void)setColoringWithColorScheme:(id)a0;
- (void)_reloadUserRatingViews;
- (id)_decimalNumberFormatter;
- (id)initWithCollectionViewCell:(id)a0;
- (void)layoutForItemOfferChange;
- (void)_initSKUIItemBrowseCellLayout;

@end
