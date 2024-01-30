@class NSString, _WKUserContentWorld;

@interface WKContentWorld : NSObject <WKObject> {
    struct ObjectStorage<API::ContentWorld> { struct type { unsigned char __lx[40]; } data; } _contentWorld;
}

@property (class, readonly, nonatomic) WKContentWorld *pageWorld;
@property (class, readonly, nonatomic) WKContentWorld *defaultClientWorld;

@property (readonly, copy, nonatomic) _WKUserContentWorld *_userContentWorld;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)worldWithName:(id)a0;

- (void)dealloc;

@end
