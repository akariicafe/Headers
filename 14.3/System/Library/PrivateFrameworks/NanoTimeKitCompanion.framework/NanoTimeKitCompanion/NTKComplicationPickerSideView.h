@class NTKComplicationLayoutRule, NSString;

@interface NTKComplicationPickerSideView : NTKEditOptionPickerSideView <NTKCurvedPickerSideView>

@property (copy, nonatomic) NTKComplicationLayoutRule *layoutRule;
@property (nonatomic) long long style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setCurvedAngle:(double)a0;

@end
