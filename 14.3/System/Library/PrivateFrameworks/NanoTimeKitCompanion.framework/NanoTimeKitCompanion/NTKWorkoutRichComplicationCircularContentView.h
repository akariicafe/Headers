@class UIColor, NSString, NTKColoringImageView, UIView, CLKComplicationTemplate;
@protocol CLKMonochromeFilterProvider;

@interface NTKWorkoutRichComplicationCircularContentView : UIView <CLKMonochromeComplicationView> {
    UIView *_backgroundView;
    UIColor *_immutableBackgroundColor;
    NTKColoringImageView *_staticImageView;
    long long _state;
}

@property (nonatomic) BOOL paused;
@property (retain, nonatomic) CLKComplicationTemplate *complicationTemplate;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_applyChanges;
- (void)_updateUI;
- (void)layoutSubviews;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)initWithNoActiveWorkoutImageName:(id)a0 animatedImagesName:(id)a1;

@end
