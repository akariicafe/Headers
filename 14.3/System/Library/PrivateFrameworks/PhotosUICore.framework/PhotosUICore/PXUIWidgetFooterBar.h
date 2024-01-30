@class NSString;

@interface PXUIWidgetFooterBar : PXUIWidgetBar <PXUIWidgetFooterViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateView;
- (void)setSpec:(id)a0;
- (void)setDisclosureTitle:(id)a0;
- (void)widgetFooterView:(id)a0 didSelectDisclosure:(id)a1;
- (id)createView;
- (double)viewHeight;

@end
