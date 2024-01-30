@class NSString;

@interface PXUIWidgetHeaderBar : PXUIWidgetBar <PXUIWidgetHeaderViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSubtitle:(id)a0;
- (void)setCaption:(id)a0;
- (void)updateView;
- (void)setTitle:(id)a0;
- (void)setDisclosureTitle:(id)a0;
- (void)setSpec:(id)a0;
- (void)widgetHeaderView:(id)a0 didSelectSubtitle:(id)a1;
- (void)widgetHeaderView:(id)a0 didSelectCaption:(id)a1;
- (id)createView;
- (double)viewHeight;

@end
