@class UIColor;

@interface LPImagePresentationProperties : NSObject

@property (nonatomic) long long filter;
@property (nonatomic) long long scalingMode;
@property (nonatomic) BOOL shouldApplyBackground;
@property (nonatomic) BOOL requireFixedSize;
@property (retain, nonatomic) UIColor *maskColor;
@property (retain, nonatomic) UIColor *backgroundColor;

- (void).cxx_destruct;
- (id)init;

@end
