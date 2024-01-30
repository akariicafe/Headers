@class NTKColoringLabel;

@interface NTKBatteryCircularSmallComplicationView : NTKCircularSmallRingTextComplicationView {
    NTKColoringLabel *_label;
}

+ (BOOL)handlesComplicationTemplate:(id)a0;

- (void).cxx_destruct;
- (void)_updateForTemplateChange;

@end
