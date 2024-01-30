@class NSString, WKProcessPool;

@interface _WKInspectorConfiguration : NSObject <WKObject, NSCopying> {
    struct ObjectStorage<API::InspectorConfiguration> { struct type { unsigned char __lx[40]; } data; } _configuration;
}

@property (retain, nonatomic) WKProcessPool *processPool;
@property (copy, nonatomic) NSString *groupIdentifier;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setURLSchemeHandler:(id)a0 forURLScheme:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (void)applyToWebViewConfiguration:(id)a0;

@end
