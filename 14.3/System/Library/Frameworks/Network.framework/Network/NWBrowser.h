@class NWBrowseDescriptor, NSSet, NWParameters, NSObject;
@protocol OS_nw_browser;

@interface NWBrowser : NSObject

@property (readonly) NSObject<OS_nw_browser> *internalBrowser;
@property (retain) NSSet *internalDiscoveredEndpoints;
@property (readonly) NWBrowseDescriptor *descriptor;
@property (readonly) NWParameters *parameters;
@property (readonly, nonatomic) NSSet *discoveredEndpoints;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)cancel;
- (void)setUpdateHandler;
- (id)initWithDescriptor:(id)a0 parameters:(id)a1;
- (id)copyDiscoveredEndpoints;
- (void).cxx_destruct;
- (void)dealloc;

@end
