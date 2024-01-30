@class NSString, PXPhotoAnalysisStatusController;

@interface PXProtoFeaturePlaceholderView : PXProtoFeatureView <PXChangeObserver> {
    PXPhotoAnalysisStatusController *_statusController;
}

@property (readonly, copy, nonatomic) NSString *statusDescription;
@property (readonly, nonatomic) double preferredStatusWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)statusDescriptionDidChange;
- (void)_updateStatusDescription;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setStatusDescription:(id)a0;

@end
