@class NSString, NSData;

@interface _WKWebAuthenticationAssertionResponse : NSObject <WKObject> {
    struct ObjectStorage<API::WebAuthenticationAssertionResponse> { struct type { unsigned char __lx[24]; } data; } _response;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSData *userHandle;
@property (readonly, nonatomic) BOOL synchronizable;
@property (readonly, copy, nonatomic) NSString *group;
@property (readonly, copy, nonatomic) NSData *credentialID;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)setLAContext:(id)a0;

@end
