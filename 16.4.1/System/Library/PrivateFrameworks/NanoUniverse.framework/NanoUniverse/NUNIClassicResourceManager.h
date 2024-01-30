@class NSString, CLKUIResourceProviderKey, NSMapTable;
@protocol MTLDevice;

@interface NUNIClassicResourceManager : NSObject <CLKUIResourceProviderDelegate> {
    id<MTLDevice> _device;
    CLKUIResourceProviderKey *_resourceProviderKey;
    unsigned long long _clients;
    NSMapTable *_textureGroupHashTable;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)_deallocInstance:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_asyncDeallocInstance;
- (void)addClient;
- (id)provideAtlasBacking:(id)a0;
- (void)removeClient;
- (id)resourceProviderKey;
- (id)textureGroupWithSuffix:(id)a0;

@end
