@class NSString, NTKColoringLabel, NSDate, CLKDevice;
@protocol CLKMonochromeFilterProvider;

@interface NTKDateRichComplicationFullColorImageView : UIView <CLKFullColorImageView> {
    CLKDevice *_device;
    long long _family;
    NTKColoringLabel *_weekdayLabel;
    NTKColoringLabel *_dayLabel;
}

@property (class, readonly, nonatomic) BOOL tritium_wantsCrossfadeAnimation;

@property (retain, nonatomic) NSDate *overrideDate;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (void)_commonInit;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_updateDate;
- (void)layoutSubviews;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)initFullColorImageViewWithDevice:(id)a0;
- (void)pauseLiveFullColorImageView;
- (void)resumeLiveFullColorImageView;
- (void)configureWithImageProvider:(id)a0 reason:(long long)a1;
- (id)initFullColorImageViewWithDevice:(id)a0 family:(long long)a1;
- (id)_newLabelSubviewWithFont:(id)a0;
- (void)_timeChanged:(id)a0;

@end
