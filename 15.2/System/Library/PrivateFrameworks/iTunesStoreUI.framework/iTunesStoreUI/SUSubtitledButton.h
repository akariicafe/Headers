@class NSString, UIColor, UILabel;

@interface SUSubtitledButton : UIButton {
    struct __CFDictionary { } *_subtitleContentLookup;
    UILabel *_subtitleView;
}

@property (readonly, retain, nonatomic) NSString *currentSubtitle;
@property (readonly, retain, nonatomic) UIColor *currentSubtitleColor;
@property (readonly, retain, nonatomic) UIColor *currentSubtitleShadowColor;
@property (readonly, retain, nonatomic) UILabel *subtitleLabel;

- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_subtitleFont;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)dealloc;
- (void)setSubtitleColor:(id)a0 forState:(unsigned long long)a1;
- (void)setSubtitleShadowColor:(id)a0 forState:(unsigned long long)a1;
- (void)setSubtitle:(id)a0 forState:(unsigned long long)a1;
- (void)_setupSubtitleView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })subtitleRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)_subtitleLineBreakMode;
- (void)configureFromScriptButton:(id)a0;
- (id)subtitleForState:(unsigned long long)a0;
- (id)subtitleColorForState:(unsigned long long)a0;
- (id)subtitleShadowColorForState:(unsigned long long)a0;
- (id)_subtitledContentForState:(unsigned long long)a0;

@end
