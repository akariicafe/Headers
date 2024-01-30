@class UILabel;
@protocol EKCellShortener;

@interface CalendarEventEditedByCell : EKUIConstrainedFontsTableViewCell {
    UILabel *_titleLabel2;
    UILabel *_valueLabel2;
    unsigned char _valuePlaceholder : 2;
}

@property (readonly, retain, nonatomic) UILabel *textLabel2;
@property (readonly, retain, nonatomic) UILabel *detailTextLabel2;
@property (weak, nonatomic) id<EKCellShortener> shortener;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_checkValueWidth;
- (void)_copyTextLabelAttributesFrom:(id)a0 to:(id)a1;
- (BOOL)detailTextIsPlaceholder;
- (BOOL)detailText2IsPlaceholder;
- (void)setDetailTextIsPlaceholder:(BOOL)a0;
- (void)setDetailText2IsPlaceholder:(BOOL)a0;

@end
