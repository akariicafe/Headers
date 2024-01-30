@class UIFont;

@interface TLKStarsView : TLKStackView

@property (nonatomic) double currentStarRating;
@property (nonatomic) double starRating;
@property (retain, nonatomic) UIFont *font;

- (void)updateStarImages;
- (id)init;
- (void).cxx_destruct;

@end
