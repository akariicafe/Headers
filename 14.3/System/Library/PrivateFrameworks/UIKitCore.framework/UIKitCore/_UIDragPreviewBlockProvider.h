@class UIDragPreview, NSString, _UIDraggingImageComponent;
@protocol _UIDragPreviewProvider;

@interface _UIDragPreviewBlockProvider : NSObject <_UIDragPreviewProvider> {
    id /* block */ _previewProviderBlock;
    _UIDraggingImageComponent *_imageComponent;
}

@property (readonly, nonatomic) id<_UIDragPreviewProvider> _dragPreviewProvider;
@property (readonly, nonatomic) UIDragPreview *preview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)previewProviderWithBlock:(id /* block */)a0;

@end
