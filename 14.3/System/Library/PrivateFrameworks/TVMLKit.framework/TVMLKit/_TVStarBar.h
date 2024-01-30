@class NSAttributedString;

@interface _TVStarBar : NSObject

@property (nonatomic) unsigned long long numStars;
@property (nonatomic) double value;
@property (retain, nonatomic) NSAttributedString *countStr;
@property (nonatomic) double barWidth;
@property (nonatomic) double height;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } barMargin;

- (void).cxx_destruct;

@end
