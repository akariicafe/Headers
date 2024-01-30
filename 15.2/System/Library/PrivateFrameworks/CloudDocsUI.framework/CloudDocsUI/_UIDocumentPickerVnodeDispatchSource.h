@class NSURL, NSObject;
@protocol OS_dispatch_source, _UIDocumentPickerVnodeDispatchSourceDelegate;

@interface _UIDocumentPickerVnodeDispatchSource : NSObject <NSCopying> {
    NSObject<OS_dispatch_source> *_source;
    id<_UIDocumentPickerVnodeDispatchSourceDelegate> _target;
    NSURL *_url;
}

@property (readonly, nonatomic) NSURL *url;

- (void)event;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)invalidate;
- (void)dealloc;
- (id)initWithTarget:(id)a0 url:(id)a1 queue:(id)a2;

@end
