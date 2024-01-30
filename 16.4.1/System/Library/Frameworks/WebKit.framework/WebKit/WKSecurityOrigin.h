@class NSString;

@interface WKSecurityOrigin : NSObject <WKObject> {
    struct ObjectStorage<API::SecurityOrigin> { struct type { unsigned char __lx[40]; } data; } _securityOrigin;
}

@property (readonly, copy, nonatomic) NSString *protocol;
@property (readonly, copy, nonatomic) NSString *host;
@property (readonly, nonatomic) long long port;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
