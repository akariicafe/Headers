@class UIImageView;
@protocol TUICandidateViewStyle;

@interface TUICandidateBaseCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) id<TUICandidateViewStyle> style;

- (void)setSelected:(BOOL)a0;
- (void)setHighlighted:(BOOL)a0;
- (id)cellBackgroundColor;
- (void).cxx_destruct;
- (id)cellBackgroundImage;
- (void)updateBackground:(id)a0 color:(id)a1;
- (void)updateColors;

@end
