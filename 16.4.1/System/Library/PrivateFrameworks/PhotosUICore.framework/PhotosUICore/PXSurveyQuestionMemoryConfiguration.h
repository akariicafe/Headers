@class PHMemory, NSString, PHPhotoLibrary, UIImage, UIView, PXSurveyQuestionConfigurationHandlers, PXMemoryView;

@interface PXSurveyQuestionMemoryConfiguration : NSObject <PXMemoryViewPresentationDelegate, PXSurveyQuestionConfiguration> {
    PXMemoryView *_memoryView;
    NSString *_customKeyAssetIdentifier;
    PHPhotoLibrary *_photoLibrary;
}

@property (readonly, nonatomic) PHMemory *memory;
@property (readonly, nonatomic) NSString *songAdamId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UIImage *contentImageForOneUp;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentRectForOneUp;
@property (retain, nonatomic) PXSurveyQuestionConfigurationHandlers *handlers;
@property (nonatomic) BOOL isStale;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 memory:(id)a1 songAdamId:(id)a2 customKeyAssetIdentifier:(id)a3;
- (void)layoutContentViewInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)needsQuestionInvalidationForChange:(id)a0;
- (void)presentDetailsForMemoryView:(id)a0;

@end
