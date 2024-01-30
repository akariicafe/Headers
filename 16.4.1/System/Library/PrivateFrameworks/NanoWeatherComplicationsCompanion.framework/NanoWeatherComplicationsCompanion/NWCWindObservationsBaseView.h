@class NSString, UILabel, UIFontDescriptor, CLKDevice;
@protocol CLKMonochromeFilterProvider;

@interface NWCWindObservationsBaseView : UIView <CLKFullColorImageView>

@property (retain, nonatomic) CLKDevice *device;
@property (retain, nonatomic) UILabel *windDirectionAbbreviationLabel;
@property (retain, nonatomic) UILabel *windSpeedLabel;
@property (retain, nonatomic) UILabel *windUnitLabel;
@property (copy, nonatomic) UIFontDescriptor *fontDescriptor;
@property (nonatomic) double fontSizeFactor;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)configureWithImageProvider:(id)a0 reason:(long long)a1;
- (id)initFullColorImageViewWithDevice:(id)a0;
- (void)pauseLiveFullColorImageView;
- (void)resumeLiveFullColorImageView;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (void)_applyConstraintsWithLayoutConstants:(struct { double x0; double x1; double x2; double x3; double x4; })a0;
- (void)_processWindSpeed:(id)a0 unit:(id)a1 directionAbbreviation:(id)a2;
- (long long)supportedComplicationFamily;

@end
