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

- (void)setBackgroundColor:(id)a0;
- (void)setIconImage:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithParentView:(id)a0;
- (id)initWithTableViewCell:(id)a0;
- (id)_decimalNumberFormatter;
- (void)_initSKUIItemBrowseCellLayout;
- (void)_reloadUserRatingViews;
- (id)initWithCollectionViewCell:(id)a0;
- (void)layoutForItemOfferChange;
- (void)setColoringWithColorScheme:(id)a0;

@end
