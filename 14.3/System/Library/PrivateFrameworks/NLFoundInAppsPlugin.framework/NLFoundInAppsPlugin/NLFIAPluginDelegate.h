@class DESRecordStore;

@interface NLFIAPluginDelegate : NSObject {
    DESRecordStore *_recordStore;
}

- (void)processSearchableItem:(id)a0;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)a0;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)a0 uniqueIdentifiers:(id)a1;
- (void).cxx_destruct;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)a0 domainIdentifiers:(id)a1;
- (id)initWithBundleIdentifier:(id)a0;
- (BOOL)isSentMessage:(id)a0;
- (id)languageForText:(id)a0;

@end
