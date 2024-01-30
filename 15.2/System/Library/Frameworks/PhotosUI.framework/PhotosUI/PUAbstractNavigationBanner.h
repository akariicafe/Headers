@class UIView;
@protocol PUAbstractNavigationBannerDelegate;

@interface PUAbstractNavigationBanner : NSObject

@property (weak, nonatomic) id<PUAbstractNavigationBannerDelegate> delegate;
@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) UIView *view;

- (void).cxx_destruct;

@end
