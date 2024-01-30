@class UIView;

@interface NTKRichComplicationRectangularFullBaseView : NTKRichComplicationRectangularBaseView {
    UIView *_content;
}

+ (BOOL)supportsComplicationFamily:(long long)a0;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)init;
- (id)content;

@end
