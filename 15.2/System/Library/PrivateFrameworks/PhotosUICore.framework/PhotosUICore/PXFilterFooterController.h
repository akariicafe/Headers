@class NSString, PXActionManager, PXFilterFooterView, UIView, PXContentFilterState;

@interface PXFilterFooterController : NSObject <PXFilterFooterViewDelegate> {
    PXActionManager *_actionManager;
    PXFilterFooterView *_footerFilterView;
    long long _libraryType;
}

@property (readonly, nonatomic) PXFilterFooterView *footerFilterView;
@property (copy, nonatomic) PXContentFilterState *contentFilterState;
@property (retain, nonatomic) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
