@class NSString, SGURLDissector;

@interface SGURLPlugin : NSObject <FIAPPlugin> {
    SGURLDissector *_urlDissector;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)processSearchableItem:(id)a0;
- (id)setup;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)a0;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)a0 uniqueIdentifiers:(id)a1;
- (void).cxx_destruct;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)a0 domainIdentifiers:(id)a1;
- (void)purgeSpotlightReferencesWithBundleIdentifier:(id)a0 uniqueIdentifiers:(id)a1;
- (id)extractURLsFromTextPropertiesOfItem:(id)a0 handle:(id)a1;
- (BOOL)_shouldProcessSearchableItem:(id)a0;
- (id)extractURLsFromAttributesOfItem:(id)a0 handle:(id)a1;

@end
