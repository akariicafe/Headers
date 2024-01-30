@class NSString;

@interface MSPMapsDefaultsAccessor : NSObject <GEOKeyBagProtectedDataDidBecomeAvailableObserver> {
    BOOL _protectedDataAvailable;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)set:(id)a0 value:(id)a1;
+ (id)get:(id)a0;
+ (void)synchronize;

- (id)_get:(id)a0;
- (void)_synchronize;
- (id)init;
- (void)protectedDataDidBecomeAvailable:(id)a0;
- (void)_set:(id)a0 value:(id)a1;

@end
