@class NSString;

@interface _WKFeature : NSObject <WKObject> {
    struct ObjectStorage<API::Feature> { struct type { unsigned char __lx[56]; } data; } _wrappedFeature;
}

@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long status;
@property (readonly, copy, nonatomic) NSString *details;
@property (readonly, nonatomic) BOOL defaultValue;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)isKindOfClass:(Class)a0;

@end
