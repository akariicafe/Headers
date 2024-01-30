@class UIImageView, NSString, UILabel;

@interface MTUIGlyphTimeView : UIView

@property (retain, nonatomic) UIImageView *glyphImageView;
@property (retain, nonatomic) NSString *glyphName;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UILabel *timeLabel;

- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithFont:(id)a0 textColor:(id)a1 glyphName:(id)a2 style:(unsigned long long)a3;
- (void)setupTimeLabelWithFont:(id)a0 textColor:(id)a1;
- (void)setComponentColor:(id)a0;
- (void)setupGlyphName:(id)a0 size:(double)a1 glyphColor:(id)a2;

@end
