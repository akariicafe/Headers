@class NSString, UIColor, UIView;

@interface AVPresentationContainerViewAppearanceProxy : NSObject

@property (weak, nonatomic) UIView *actualView;
@property (retain, nonatomic) NSString *cornerCurve;
@property (nonatomic) unsigned long long maskedCorners;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) BOOL clipsToBounds;

- (void).cxx_destruct;

@end
