@class UILabel, NSMutableArray;

@interface ICQSubtitleHeaderView : UIView <PSHeaderFooterView>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSMutableArray *subtitleLabels;

- (id)initWithSpecifier:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)subtitleAtIndex:(unsigned long long)a0;
- (double)preferredHeightForWidth:(double)a0;
- (id)addSubtitle;
- (void)removeSubtitleAtIndex:(unsigned long long)a0;

@end
