@class NSString, NSData;

@interface _WKWebAuthenticationAssertionResponse : NSObject <WKObject> {
    struct ObjectStorage<API::WebAuthenticationAssertionResponse> { struct type { unsigned char __lx[24]; } data; } _response;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSData *userHandle;
@property (readonly) struct Object { void /* function */ **x0; id x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;

@end
