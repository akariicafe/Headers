@class UIActivity, UIImage, NSObject;
@protocol SUActivityItemProviderDelegate, OS_dispatch_queue;

@interface SUActivityItemProvider : UIActivityItemProvider {
    UIActivity *_activity;
    id<SUActivityItemProviderDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id _lastProvidedItem;
    UIImage *_previewImage;
}

@property (weak) id<SUActivityItemProviderDelegate> delegate;
@property (retain, setter=setSUActivity:) UIActivity *suActivity;
@property (readonly) id suLastProvidedItem;
@property (retain, setter=setSUPreviewImage:) UIImage *suPreviewImage;

- (id)item;
- (void)dealloc;
- (id)initWithPlaceholderItem:(id)a0;

@end
