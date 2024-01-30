@class UIColor;

@interface VUIProgressBarLayout : NSObject

@property (retain, nonatomic) UIColor *fillColor;
@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) UIColor *gradientStartColor;
@property (retain, nonatomic) UIColor *gradientEndColor;
@property (nonatomic) double height;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } margin;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL shouldProgressBarUseRoundCorner;
@property (nonatomic) BOOL useMaterial;

+ (id)defaultProgressBarLayout;

- (void).cxx_destruct;

@end
