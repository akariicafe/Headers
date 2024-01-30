@class EMContentRepresentation, NSString, _MFMessageURLProtocolRegistry, EFPromise, NSObject;
@protocol OS_os_log, EFCancelable;

@interface MFMessageURLProtocol : NSURLProtocol <EFLoggable>

@property (class, retain, nonatomic) _MFMessageURLProtocolRegistry *registry;
@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) id<EFCancelable> cancelable;
@property (retain, nonatomic) EFPromise *promise;
@property (retain, nonatomic) EMContentRepresentation *contentRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)canonicalRequestForRequest:(id)a0;
+ (void)registerContentRepresentation:(id)a0;
+ (id)contentRepresentationForURL:(id)a0;
+ (BOOL)requestIsCacheEquivalent:(id)a0 toRequest:(id)a1;
+ (BOOL)canInitWithRequest:(id)a0;

- (void)startLoading;
- (id)initWithRequest:(id)a0 cachedResponse:(id)a1 client:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stopLoading;
- (id)_cachedResponseWithData:(id)a0 mimeType:(id)a1 error:(id *)a2;

@end
