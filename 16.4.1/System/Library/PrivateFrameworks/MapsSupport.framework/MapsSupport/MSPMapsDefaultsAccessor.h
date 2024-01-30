@class NSString;

@interface MSPMapsDefaultsAccessor : NSObject <GEOKeyBagProtectedDataDidBecomeAvailableObserver> {
    BOOL _protectedDataAvailable;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)synchronize;
+ (void)set:(id)a0 value:(id)a1;
+ (id)get:(id)a0;

- (void)protectedDataDidBecomeAvailable:(id)a0;
- (id)init;
- (void)_synchronize;
- (id)_get:(id)a0;
- (void)_set:(id)a0 value:(id)a1;

@end
