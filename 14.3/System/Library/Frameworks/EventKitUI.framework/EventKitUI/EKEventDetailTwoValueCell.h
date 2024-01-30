@class UILabel;

@interface EKEventDetailTwoValueCell : EKEventDetailCell {
    int _style;
    UILabel *_titleView;
    UILabel *_valueView;
    UILabel *_value2View;
    int _twoValueCellStyle;
}

@property (readonly, nonatomic) unsigned int visibleItems;

- (id)titleView;
- (void).cxx_destruct;
- (BOOL)update;
- (void)layoutForWidth:(double)a0 position:(int)a1;
- (void)layoutSubviews;
- (id)valueView;
- (double)_layoutForWidth:(double)a0;
- (id)value2View;
- (id)initWithEvent:(id)a0 editable:(BOOL)a1 platformStyle:(int)a2;
- (int)twoValueCellStyle;

@end
