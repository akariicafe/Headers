@class UILabel, NSMutableArray;

@interface ICQSubtitleHeaderView : UIView <PSHeaderFooterView>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSMutableArray *subtitleLabels;

- (void)layoutSubviews;
- (id)subtitleAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (double)preferredHeightForWidth:(double)a0;
- (id)initWithSpecifier:(id)a0;
- (id)addSubtitle;
- (void)removeSubtitleAtIndex:(unsigned long long)a0;

@end
