@class UILabel, CLKDevice;

@interface AltitudeRichCenterLabelDialView : AltitudeRichDialView {
    CLKDevice *_device;
    UILabel *_altitudeLabel;
    double _altitudeLabelHeight;
}

- (void).cxx_destruct;
- (void)configureWithImageProvider:(id)a0 reason:(long long)a1;
- (id)_newTopView;
- (id)_newBottomView;
- (id)initFullColorImageViewWithDevice:(id)a0 withLayoutConstants:(struct LayoutConstants { double x0; double x1; id x2; double x3; double x4; })a1;
- (void)layoutLabelInCenterWithTopAndBottomAssets;

@end
