@class NSString, NSArray, NSBundle;

@interface NLFoundInAppsPlugin : NSObject <FIAPPlugin> {
    NSArray *_delegates;
    NSBundle *_FIAPBundle;
    Class _FIAPResult;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)processSearchableItem:(id)a0;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)a0;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)a0 uniqueIdentifiers:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)a0 domainIdentifiers:(id)a1;

@end
