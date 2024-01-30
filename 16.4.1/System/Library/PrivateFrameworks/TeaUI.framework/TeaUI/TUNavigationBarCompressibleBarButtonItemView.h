@class NSString, UIView;
@protocol TUNavigationBarButtonItemCompressible;

@interface TUNavigationBarCompressibleBarButtonItemView : NSObject <TUNavigationBarButtonItemCompressible>

@property (readonly, nonatomic) UIView<TUNavigationBarButtonItemCompressible> *customItemView;
@property (readonly, nonatomic) UIView *regularItemView;
@property (readonly, nonatomic) UIView *view;
@property (nonatomic) double contentAlpha;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCustomItemView:(id)a0;
- (id)initWithRegularItemView:(id)a0;

@end
