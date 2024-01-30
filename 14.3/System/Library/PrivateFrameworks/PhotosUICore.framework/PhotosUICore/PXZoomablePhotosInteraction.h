@class PXZoomablePhotosViewModel, NSObject;
@protocol PXZoomablePhotosInteractionDelegate, PXAnonymousView;

@interface PXZoomablePhotosInteraction : NSObject {
    double _currentMagnifyEventScale;
    id _eventMonitor;
}

@property (readonly, nonatomic) PXZoomablePhotosViewModel *viewModel;
@property (readonly, nonatomic) NSObject<PXAnonymousView> *view;
@property (weak, nonatomic) id<PXZoomablePhotosInteractionDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (id)initWithZoomablePhotosViewModel:(id)a0 view:(id)a1;
- (BOOL)handlePinch:(id)a0;
- (BOOL)handleTapOnAssetReference:(id)a0;
- (BOOL)_pinchInteractionShouldBegin;

@end
