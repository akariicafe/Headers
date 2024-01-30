@class CSProminentSubtitleDateView;

@interface CSProminentSubtitleView : CSProminentTextElementView

@property (retain, nonatomic) CSProminentSubtitleDateView *dateView;
@property (retain, nonatomic) CSProminentSubtitleDateView *compactDateView;

+ (unsigned long long)elementType;

- (id)initWithDate:(id)a0 font:(id)a1 textColor:(id)a2;
- (BOOL)_usesCompactDate;
- (void)setDate:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
