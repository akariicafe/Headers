@class UIView;

@interface NTKRichComplicationRectangularFullBaseView : NTKRichComplicationRectangularBaseView {
    UIView *_content;
}

+ (BOOL)supportsComplicationFamily:(long long)a0;

- (id)content;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;

@end
