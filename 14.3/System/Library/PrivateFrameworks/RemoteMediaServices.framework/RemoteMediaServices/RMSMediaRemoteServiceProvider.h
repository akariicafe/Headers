@class NSString, NSMapTable;
@protocol RMSServiceProviderDelegate;

@interface RMSMediaRemoteServiceProvider : NSObject <RMSServiceProvider> {
    void *_televisionController;
    NSMapTable *_services;
}

@property (weak, nonatomic) id<RMSServiceProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)beginDiscovery;
- (void)endDiscovery;
- (void)_didDiscoverTelevision:(void *)a0;
- (void)_didRemoveTelevision:(void *)a0;
- (id)_serviceWithTelevision:(void *)a0;

@end
