@class UILabel;

@interface EKEventDetailTwoValueCell : EKEventDetailCell {
    int _style;
    UILabel *_titleView;
    UILabel *_valueView;
    UILabel *_value2View;
    int _twoValueCellStyle;
}

@property (readonly, nonatomic) unsigned int visibleItems;

- (void)layoutForWidth:(double)a0 position:(int)a1;
- (BOOL)update;
- (double)_layoutForWidth:(double)a0;
- (id)titleView;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)valueView;
- (id)initWithEvent:(id)a0 editable:(BOOL)a1 platformStyle:(int)a2;
- (int)twoValueCellStyle;
- (id)value2View;

@end
