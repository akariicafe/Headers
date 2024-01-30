@class NSArray;

@interface SKUIChartColumnHeaderView : UIControl {
    NSArray *_buttons;
}

@property (readonly, nonatomic) double edgePadding;
@property (nonatomic) long long selectedTitleIndex;
@property (copy, nonatomic) NSArray *titles;

- (void).cxx_destruct;
- (void)sizeToFit;
- (void)dealloc;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (void)_buttonAction:(id)a0;
- (void)_reloadSelectedButton;

@end
