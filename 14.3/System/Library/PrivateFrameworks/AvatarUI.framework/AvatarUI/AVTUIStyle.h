@class UIColor;

@interface AVTUIStyle : NSObject

@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *textColor;

+ (id)darkStyle;
+ (id)lightStyle;

- (void).cxx_destruct;

@end
