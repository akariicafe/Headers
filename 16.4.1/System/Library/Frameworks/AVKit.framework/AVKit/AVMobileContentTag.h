@class NSString, UIColor;

@interface AVMobileContentTag : NSObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) UIColor *tintColor;
@property (readonly, nonatomic) UIColor *labelTextColor;
@property (readonly, nonatomic) float normalizedCornerRadius;
@property (readonly, nonatomic) unsigned long long placement;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } layoutMargins;

+ (id)_liveContentTagWithTintColor:(id)a0 withTextColor:(id)a1;
+ (id)adContentTag;
+ (id)adContentTagWithTintColor:(id)a0;
+ (id)liveContentTag;
+ (id)liveEdgeContentTag;

- (id)_initInternal;
- (void).cxx_destruct;

@end
