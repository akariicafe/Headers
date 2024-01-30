@class NSString;

@interface WKNavigation : NSObject <WKObject> {
    struct ObjectStorage<API::Navigation> { struct type { unsigned char __lx[1280]; } data; } _navigation;
}

@property (readonly, nonatomic) long long effectiveContentMode;
@property (readonly) struct Object { void /* function */ **x0; id x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_request;
- (void)dealloc;

@end
