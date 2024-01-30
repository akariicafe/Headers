@class UIView;

@interface _UIDebuggingOverlayDetailOpacity : _UIDebuggingOverlayDetail {
    UIView *_view;
    UIView *_inspectedView;
}

- (id)view;
- (void)_updateForInspectedView:(id)a0;
- (void)_sliderValueChanged:(id)a0;
- (void).cxx_destruct;

@end
