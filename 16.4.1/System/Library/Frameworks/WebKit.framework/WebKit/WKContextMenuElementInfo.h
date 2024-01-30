@class NSURL, NSString;

@interface WKContextMenuElementInfo : NSObject <WKObject> {
    struct ObjectStorage<API::ContextMenuElementInfo> { struct type { unsigned char __lx[640]; } data; } _elementInfo;
}

@property (readonly, nonatomic) NSURL *linkURL;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_activatedElementInfo;

@end
