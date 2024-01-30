@class NSString;

@interface _WKInternalDebugFeature : NSObject <WKObject> {
    struct ObjectStorage<API::InternalDebugFeature> { struct type { unsigned char __lx[48]; } data; } _internalDebugFeature;
}

@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *details;
@property (readonly, nonatomic) BOOL defaultValue;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly) struct Object { void /* function */ **x0; id x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;

@end
