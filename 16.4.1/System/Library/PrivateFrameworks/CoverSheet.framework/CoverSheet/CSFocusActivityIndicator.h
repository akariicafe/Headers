@class NSString, _UILegibilitySettings;
@protocol FCActivityDescribing;

@interface CSFocusActivityIndicator : UICoverSheetButton <SBUILegibility> {
    id<FCActivityDescribing> _previousActivity;
}

@property (retain, nonatomic) id<FCActivityDescribing> activity;
@property (nonatomic) double strength;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })activityIndicatorExpandedSize;
+ (struct CGSize { double x0; double x1; })activityIndicatorSize;

- (void)_updateStyle;
- (void)setSelected:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setEnabled:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_setSelected:(BOOL)a0;
- (void)_updateForActivity;
- (long long)_userInterfaceStyleForCurrentActivity;

@end
