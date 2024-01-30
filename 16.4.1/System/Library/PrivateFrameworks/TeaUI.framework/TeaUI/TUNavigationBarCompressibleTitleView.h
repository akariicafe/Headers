@class UILabel, NSString, UIView;
@protocol TUNavigationBarCompressible;

@interface TUNavigationBarCompressibleTitleView : NSObject <TUNavigationBarCompressible>

@property (readonly, nonatomic) UIView<TUNavigationBarCompressible> *customTitleView;
@property (readonly, nonatomic) UILabel *regularTitleView;
@property (readonly, nonatomic) UIView *view;
@property (nonatomic) double contentAlpha;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCustomTitleView:(id)a0;
- (id)initWithRegularTitleView:(id)a0;

@end
