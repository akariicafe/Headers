@class NSMutableDictionary;

@interface ATXModeEntityStore : NSObject {
    NSMutableDictionary *_entityStore;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)appEntityForBundleId:(id)a0;
- (void)writeAppEntity:(id)a0;

@end
