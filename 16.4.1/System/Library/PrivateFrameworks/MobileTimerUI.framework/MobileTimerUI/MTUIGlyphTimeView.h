@class UIImageView, NSString, UILabel;

@interface MTUIGlyphTimeView : UIView

@property (retain, nonatomic) UIImageView *glyphImageView;
@property (retain, nonatomic) NSString *glyphName;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UILabel *timeLabel;

- (void)setupTimeLabelWithFont:(id)a0 textColor:(id)a1;
- (void)setupConstraints;
- (void)setupGlyphName:(id)a0 size:(double)a1 glyphColor:(id)a2;
- (id)initWithFont:(id)a0 textColor:(id)a1 glyphName:(id)a2 style:(unsigned long long)a3;
- (void).cxx_destruct;
- (void)setComponentColor:(id)a0;

@end
