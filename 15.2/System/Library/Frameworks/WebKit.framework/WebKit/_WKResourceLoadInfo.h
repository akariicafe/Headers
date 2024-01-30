@class NSString, NSURL, NSDate, _WKFrameHandle;

@interface _WKResourceLoadInfo : NSObject <WKObject, NSSecureCoding> {
    struct ObjectStorage<API::ResourceLoadInfo> { struct type { unsigned char __lx[120]; } data; } _info;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long resourceLoadID;
@property (readonly, nonatomic) _WKFrameHandle *frame;
@property (readonly, nonatomic) _WKFrameHandle *parentFrame;
@property (readonly, nonatomic) NSURL *originalURL;
@property (readonly, nonatomic) NSString *originalHTTPMethod;
@property (readonly, nonatomic) NSDate *eventTimestamp;
@property (readonly, nonatomic) BOOL loadedFromCache;
@property (readonly, nonatomic) long long resourceType;
@property (readonly) struct Object { void /* function */ **x0; id x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
