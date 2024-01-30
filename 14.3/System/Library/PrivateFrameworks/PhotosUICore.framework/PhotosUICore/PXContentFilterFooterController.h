@class PXContentFilterFooterView, NSString, PXActionManager, UIView, PXContentFilterState;

@interface PXContentFilterFooterController : NSObject <PXContentFilterFooterViewDelegate> {
    PXActionManager *_actionManager;
    PXContentFilterFooterView *_footerFilterView;
}

@property (readonly, nonatomic) PXContentFilterFooterView *footerFilterView;
@property (copy, nonatomic) PXContentFilterState *filterState;
@property (retain, nonatomic) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
