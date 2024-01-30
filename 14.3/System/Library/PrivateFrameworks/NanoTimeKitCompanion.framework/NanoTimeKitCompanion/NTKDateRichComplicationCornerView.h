@class NSString, NTKCurvedRoundedRectShapeLayer, NSDate, NTKCurvedColoringLabel;
@protocol CLKMonochromeFilterProvider;

@interface NTKDateRichComplicationCornerView : NTKRichComplicationCornerView <CLKMonochromeComplicationView> {
    NTKCurvedColoringLabel *_weekdayLabel;
    NTKCurvedColoringLabel *_previousDateLabel;
    NTKCurvedColoringLabel *_dateLabel;
    NTKCurvedColoringLabel *_nextDateLabel;
    NTKCurvedRoundedRectShapeLayer *_previousDatePlatter;
    NTKCurvedRoundedRectShapeLayer *_datePlatter;
    NTKCurvedRoundedRectShapeLayer *_nextDatePlatter;
    NSDate *_overrideDate;
}

@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_updateDate;
- (void)layoutSubviews;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (void)_enumerateLabelsWithBlock:(id /* block */)a0;
- (id)_createAndAddLabelPlatterWithAngularWidth:(double)a0 color:(id)a1;
- (id)_createAndAddColoringLabelWithFontSize:(double)a0 dayOffset:(long long)a1;
- (void)_timeChanged:(id)a0;

@end
