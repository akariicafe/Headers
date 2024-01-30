@class NSMutableDictionary, NSHashTable;

@interface HFMediaServiceManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *homeIdentifierToMediaServicesMapping;
@property (retain, nonatomic) NSMutableDictionary *homeIdentifierToDefaultServiceMapping;
@property (retain, nonatomic) NSMutableDictionary *homeIdentifierToReadRequestInFlightMapping;
@property (retain, nonatomic) NSMutableDictionary *homeIdentifierToRefreshNeededMapping;
@property (retain, nonatomic) NSHashTable *observers;

+ (id)sharedManager;

- (void)warmup;
- (id)init;
- (void).cxx_destruct;
- (void)addMediaServiceManagerObserver:(id)a0;
- (id)defaultMediaServiceForHome:(id)a0;
- (id)fetchMediaServicesForHome:(id)a0;
- (BOOL)isRefreshNeededForHome:(id)a0;
- (id)mediaServicesForHome:(id)a0;
- (id)removeMediaService:(id)a0 forHome:(id)a1;
- (void)removeMediaServiceManagerObserver:(id)a0;
- (id)updateDefaultMediaService:(id)a0 forHome:(id)a1;
- (id)updateProperty:(id)a0 forHome:(id)a1 withOptions:(id)a2;
- (id)_defaultMediaServiceForHome:(id)a0;
- (void)_dispatchMessageToObserversWithBlock:(id /* block */)a0;
- (id)_fetchDefaultMediaServiceForHome:(id)a0;
- (BOOL)_isReadRequestInFlightForHome:(id)a0;
- (id)_mediaServicesForHome:(id)a0;

@end
