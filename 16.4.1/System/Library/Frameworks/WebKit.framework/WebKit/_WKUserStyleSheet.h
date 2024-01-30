@class NSString, NSURL;

@interface _WKUserStyleSheet : NSObject <WKObject, NSCopying> {
    struct ObjectStorage<API::UserStyleSheet> { struct type { unsigned char __lx[136]; } data; } _userStyleSheet;
}

@property (readonly, copy, nonatomic) NSString *source;
@property (readonly, copy, nonatomic) NSURL *baseURL;
@property (readonly, nonatomic, getter=isForMainFrameOnly) BOOL forMainFrameOnly;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
