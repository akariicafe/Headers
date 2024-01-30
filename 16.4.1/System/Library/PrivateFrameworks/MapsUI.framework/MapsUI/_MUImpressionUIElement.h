@class MUImpressionElement, NSDate;

@interface _MUImpressionUIElement : NSObject

@property (retain, nonatomic) MUImpressionElement *clientElement;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSDate *startDate;

- (void).cxx_destruct;

@end
