@class NSString, UIColor;

@interface FIUIChartAxisLabel : NSObject

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) id location;
@property (nonatomic) BOOL useReversePlacement;
@property (retain, nonatomic) UIColor *labelColor;
@property (nonatomic) UIColor *shadowColor;
@property (nonatomic) struct CGSize { double width; double height; } shadowOffset;
@property (nonatomic) double shadowBlur;

- (void).cxx_destruct;
- (id)description;

@end
