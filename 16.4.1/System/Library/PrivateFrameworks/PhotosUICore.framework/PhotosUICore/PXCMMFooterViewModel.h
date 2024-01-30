@class NSString, PXMomentShareStatusPresentation;

@interface PXCMMFooterViewModel : PXFooterViewModel <PXChangeObserver> {
    PXMomentShareStatusPresentation *_momentShareStatusPresentation;
    long long _mode;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithMomentShareStatusPresentation:(id)a0 mode:(long long)a1;
- (void)_updateAllProperties;
- (id)init;
- (void).cxx_destruct;

@end
