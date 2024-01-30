@class NSString, PXStatusViewModel, PXMomentShareStatusPresentation;

@interface PXCMMStatusController : NSObject <PXChangeObserver> {
    PXMomentShareStatusPresentation *_statusPresentation;
}

@property (readonly, nonatomic) PXStatusViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithStatusPresentation:(id)a0 viewModel:(id)a1;
- (void)_updateWithChangeDescriptor:(unsigned long long)a0;

@end
