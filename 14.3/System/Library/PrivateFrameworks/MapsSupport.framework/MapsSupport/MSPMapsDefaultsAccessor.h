@class NSString;

@interface MSPMapsDefaultsAccessor : NSObject <GEOKeyBagProtectedDataDidBecomeAvailableObserver> {
    BOOL _protectedDataAvailable;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)get:(id)a0;
+ (void)synchronize;
+ (void)set:(id)a0 value:(id)a1;

- (void)protectedDataDidBecomeAvailable:(id)a0;
- (id)init;
- (id)_get:(id)a0;
- (void)_synchronize;
- (void)_set:(id)a0 value:(id)a1;

@end
