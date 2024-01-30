@class NSArray, NSDictionary, NSObject;
@protocol OS_dispatch_queue, TTSSynthesisProviderVoiceManagerDelegate;

@interface TTSSynthesisProviderVoiceManager : NSObject

@property (class, retain) NSArray *componentCache;
@property (class, readonly) NSDictionary *voiceCache;
@property (class, readonly) NSArray *allSynthesisProviderVoices;
@property (class, readonly) NSArray *allSynthesisProviderTTSVoices;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *componentQueryQueue;
@property (weak, nonatomic) id<TTSSynthesisProviderVoiceManagerDelegate> delegate;

+ (id)macintalkAudioUnitProvider;
+ (void)resetInMemoryCache;
+ (BOOL)synthesizerHasEntitlement:(id)a0 entitlement:(const char *)a1;
+ (BOOL)_componentIsEqual:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a0 to:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a1;

- (void)_reloadVoiceForBundleIdentifierHash:(id)a0;
- (void)reloadVoicesForBundleIdentifierHash:(id)a0;
- (void)reloadVoicesForBundleIdentifierPrefix:(id)a0;
- (void)_loadVoicesForComponentRecord:(id)a0 dispatchGroup:(id)a1;
- (void)_loadVoicesForComponents:(id)a0;
- (void)reconcileCachedComponents;
- (void)_reconcileCachedComponents:(id)a0;
- (id)init;
- (void)purgeAndReloadAllComponents;
- (void)_reloadVoiceForBundleIdentifierPrefix:(id)a0;
- (id)_systemAudioUnitProviders;
- (BOOL)_loadVoicesForComponentWithTimeout:(id)a0 timeout:(double)a1 timedOut:(BOOL *)a2;
- (void).cxx_destruct;

@end
