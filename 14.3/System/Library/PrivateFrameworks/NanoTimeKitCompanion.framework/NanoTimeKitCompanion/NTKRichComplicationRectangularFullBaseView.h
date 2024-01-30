@class UIView;

@interface NTKRichComplicationRectangularFullBaseView : NTKRichComplicationRectangularBaseView {
    UIView *_content;
}

+ (BOOL)supportsComplicationFamily:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)content;

@end
