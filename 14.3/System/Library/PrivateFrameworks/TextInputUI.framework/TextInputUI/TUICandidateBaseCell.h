@class UIImageView;
@protocol TUICandidateViewStyle;

@interface TUICandidateBaseCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) id<TUICandidateViewStyle> style;

- (void).cxx_destruct;
- (id)cellBackgroundColor;
- (id)cellBackgroundImage;
- (void)setSelected:(BOOL)a0;
- (void)updateColors;
- (void)updateBackground:(id)a0 color:(id)a1;
- (void)setHighlighted:(BOOL)a0;

@end
