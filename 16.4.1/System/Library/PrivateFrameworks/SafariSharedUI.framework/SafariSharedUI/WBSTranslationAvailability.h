@class NSArray, NSString, NSNumber;
@protocol WBSTranslationAvailabilityProviding;

@interface WBSTranslationAvailability : NSObject <WBSTranslationAvailabilityProviding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<WBSTranslationAvailabilityProviding> _availabilityProvider;
    NSArray *_cachedAvailableLocalePairs;
    BOOL _hasCheckedAvailableLocalePairs;
    NSNumber *_cachedTranslationAvailableInCurrentRegion;
    NSArray *_cachedUserPreferredLocales;
    id /* block */ _availableInCurrentRegionCompletionHandler;
    id /* block */ _availableLocalePairsCompletionHandler;
}

@property (readonly, nonatomic) NSArray *userPreferredTargetLocales;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedAvailability;

- (id)init;
- (void).cxx_destruct;
- (void)_updateCachedValues;
- (void)_didUpdateSupportedRegionAndLocalePairs;
- (id)_initWithAvailabilityProvider:(id)a0;
- (void)getAllTargetLocalesInUserPreferredOrderWithCompletionHandler:(id /* block */)a0;
- (void)getAvailableLocalePairsWithCompletionHandler:(id /* block */)a0;
- (void)getTranslationAvailabilityWithCompletionHandler:(id /* block */)a0;
- (void)isTranslationSupportedForCurrentRegionWithCompletionHandler:(id /* block */)a0;
- (void)supportedLocalePairsWithCompletionHandler:(id /* block */)a0;

@end
