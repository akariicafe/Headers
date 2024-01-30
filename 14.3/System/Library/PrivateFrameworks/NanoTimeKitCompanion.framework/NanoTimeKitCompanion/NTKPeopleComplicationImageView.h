@class UIColor, NSString, CLKImageProvider, UIImageView, UILabel, UIView;
@protocol CLKMonochromeFilterProvider;

@interface NTKPeopleComplicationImageView : UIView <NTKComplicationImageView, CLKFullColorImageView> {
    UILabel *_nameLabel;
    UIImageView *_profileImageView;
    UIView *_ringView;
    double _monochromeTintAmount;
}

@property (class, readonly, nonatomic) BOOL tritium_wantsCrossfadeAnimation;

@property (retain, nonatomic) CLKImageProvider *imageProvider;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) BOOL usesLegibility;
@property (retain, nonatomic) UIColor *overrideColor;
@property (readonly, nonatomic) UIColor *contentColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;


- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)initFullColorImageViewWithDevice:(id)a0;
- (void)pauseLiveFullColorImageView;
- (void)resumeLiveFullColorImageView;
- (void)configureWithImageProvider:(id)a0 reason:(long long)a1;

@end
