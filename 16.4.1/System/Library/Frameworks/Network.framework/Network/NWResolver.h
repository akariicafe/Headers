@class NSSet, NSArray, NWParameters, NWEndpoint, NSObject;
@protocol OS_nw_resolver;

@interface NWResolver : NSObject

@property (readonly) NSObject<OS_nw_resolver> *internalResolver;
@property long long internalStatus;
@property (retain) NSSet *internalResolvedEndpoints;
@property (retain) NSArray *internalResolvedEndpointArray;
@property (readonly, nonatomic) long long status;
@property (readonly) NWEndpoint *endpoint;
@property (readonly) NWParameters *parameters;
@property (readonly, nonatomic) NSSet *resolvedEndpoints;
@property (readonly, nonatomic) NSArray *resolvedEndpointArray;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)initWithPath:(id)a0;
- (void)dealloc;
- (id)initWithEndpoint:(id)a0 parameters:(id)a1;
- (void).cxx_destruct;
- (id)copyResolvedEndpointArray;
- (id)copyResolvedEndpoints;
- (void)setUpdateHandler;

@end
