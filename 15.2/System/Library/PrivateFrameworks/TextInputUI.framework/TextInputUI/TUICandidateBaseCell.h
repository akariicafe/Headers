@class UIImageView;
@protocol TUICandidateViewStyle;

@interface TUICandidateBaseCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) id<TUICandidateViewStyle> style;

- (void)setHighlighted:(BOOL)a0;
- (void)setSelected:(BOOL)a0;
- (void)updateColors;
- (void)updateBackground:(id)a0 color:(id)a1;
- (void).cxx_destruct;
- (id)cellBackgroundImage;
- (id)cellBackgroundColor;

@end
