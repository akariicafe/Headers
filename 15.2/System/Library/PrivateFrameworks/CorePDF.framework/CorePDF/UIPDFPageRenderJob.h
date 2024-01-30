@class UIImage, UIPDFPageRenderOperation, UIPDFPage;

@interface UIPDFPageRenderJob : NSObject {
    UIPDFPage *_page;
    UIImage *_image;
    UIPDFPageRenderOperation *_operation;
    id _target;
    SEL _callback;
    id _userData;
    BOOL _sendPending;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, retain) UIImage *image;
@property UIPDFPageRenderOperation *operation;
@property (readonly) unsigned long long pageIndex;
@property (readonly) long long priority;
@property BOOL releaseWhenDone;
@property (readonly) struct CGSize { double width; double height; } size;

- (id)operation;
- (void)setOperation:(id)a0;
- (void)sendImage;
- (id)image;
- (void)cancelOperation;
- (BOOL)hasPage;
- (void)dealloc;
- (void)cancel;
- (id)initWithPage:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1 queuePriority:(long long)a2;
- (void)cancelOperationForTarget:(id)a0;
- (void)setTarget:(id)a0 callback:(SEL)a1 userData:(id)a2;
- (void)releaseOperation;
- (void)renderImage;
- (void)sendImageTo:(id)a0 callback:(SEL)a1 userData:(id)a2;

@end
