@class NSString, PXMomentShareStatusPresentation;
@protocol PXCMMFooterViewModelActionDelegate;

@interface PXCMMFooterViewModel : PXFooterViewModel <PXChangeObserver> {
    PXMomentShareStatusPresentation *_momentShareStatusPresentation;
}

@property (weak, nonatomic) id<PXCMMFooterViewModelActionDelegate> actionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateAllProperties;
- (id)initWithMomentShareStatusPresentation:(id)a0;

@end
