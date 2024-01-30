@class NSString, NTKColoringLabel, NSDate, CLKDevice;
@protocol CLKMonochromeFilterProvider;

@interface NTKDateRichComplicationFullColorImageView : UIView <CLKFullColorImageView> {
    CLKDevice *_device;
    long long _family;
    NTKColoringLabel *_weekdayLabel;
    NTKColoringLabel *_dayLabel;
}

@property (retain, nonatomic) NSDate *overrideDate;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)_updateDate;
- (void).cxx_destruct;
- (void)_commonInit;
- (void)dealloc;
- (void)_timeChanged:(id)a0;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)initFullColorImageViewWithDevice:(id)a0;
- (void)pauseLiveFullColorImageView;
- (void)resumeLiveFullColorImageView;
- (void)configureWithImageProvider:(id)a0 reason:(long long)a1;
- (id)initFullColorImageViewWithDevice:(id)a0 family:(long long)a1;
- (id)_newLabelSubviewWithFont:(id)a0;

@end
