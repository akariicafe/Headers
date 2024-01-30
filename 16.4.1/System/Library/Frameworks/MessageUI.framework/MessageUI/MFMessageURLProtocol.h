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
+ (BOOL)requestIsCacheEquivalent:(id)a0 toRequest:(id)a1;
+ (BOOL)canInitWithRequest:(id)a0;
+ (id)canonicalRequestForRequest:(id)a0;
+ (id)contentRepresentationForURL:(id)a0;
+ (void)registerContentRepresentation:(id)a0;

- (void)startLoading;
- (void)stopLoading;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 cachedResponse:(id)a1 client:(id)a2;
- (id)_cachedResponseWithData:(id)a0 mimeType:(id)a1 error:(id *)a2;

@end
