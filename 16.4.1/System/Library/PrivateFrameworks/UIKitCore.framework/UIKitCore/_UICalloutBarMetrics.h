@class UIColor, NSArray;

@interface _UICalloutBarMetrics : NSObject

@property (nonatomic) BOOL isVerticallyAligned;
@property (readonly, nonatomic) double cornerRadius;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) NSArray *blurViewBackgroundEffects;
@property (readonly, nonatomic) double interitemPadding;
@property (readonly, nonatomic) double verticalPadding;
@property (readonly, nonatomic) double horizontalPadding;
@property (readonly, nonatomic) BOOL displaySeparators;
@property (readonly, nonatomic) UIColor *separatorColor;

- (id)init;
- (void).cxx_destruct;

@end
