@class NSMutableDictionary, ATXModeMetadataConstants;

@interface ATXModeEntityStore : NSObject {
    NSMutableDictionary *_entityStore;
    ATXModeMetadataConstants *_modeMetadataConstants;
}

- (id)init;
- (void).cxx_destruct;
- (id)appEntityForBundleId:(id)a0;
- (id)initWithModeMetadataConstants:(id)a0;

@end
