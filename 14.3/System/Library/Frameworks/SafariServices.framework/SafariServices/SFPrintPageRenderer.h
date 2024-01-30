@class UIFont, NSString, NSNumberFormatter, UIPrintFormatter, UIColor;
@protocol SFPrintPageRendererDelegate;

@interface SFPrintPageRenderer : UIPrintPageRenderer <UIPrintInteractionControllerDelegate> {
    NSNumberFormatter *_numberFormatter;
    double _URLWidth;
    NSString *_dateString;
    double _dateWidth;
    double _printWidth;
    struct CGPoint { double x; double y; } _contentOffset;
    struct CGPoint { double x; double y; } _footerOffset;
    UIFont *_footerFont;
    UIColor *_footerColor;
}

@property (retain, nonatomic) NSString *URLString;
@property (retain, nonatomic) UIPrintFormatter *contentFormatter;
@property (nonatomic) BOOL printFooter;
@property (weak, nonatomic) id<SFPrintPageRendererDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)printInteractionControllerWillStartJob:(id)a0;
- (void)printInteractionControllerDidFinishJob:(id)a0;
- (id)printInteractionControllerParentViewController:(id)a0;
- (void)drawFooterForPageAtIndex:(long long)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
