@class NSString, NSURLResponse, NSURL, NSURLRequest;

@interface WKNavigationData : NSObject <WKObject> {
    struct ObjectStorage<API::NavigationData> { struct type { unsigned char __lx[552]; } data; } _data;
}

@property (readonly) NSString *title;
@property (readonly) NSURLRequest *originalRequest;
@property (readonly) NSURL *destinationURL;
@property (readonly) NSURLResponse *response;
@property (readonly) struct Object { void /* function */ **x0; id x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;

@end
