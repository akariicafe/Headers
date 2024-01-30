@class UIFont;

@interface TLKStarsView : TLKStackView

@property (nonatomic) double currentStarRating;
@property (nonatomic) double starRating;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) BOOL useCompactMode;

- (void).cxx_destruct;
- (id)init;
- (void)updateStarImages;

@end
