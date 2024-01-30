@class NSMutableDictionary;

@interface PXFeedbackStore : NSObject

@property (readonly, nonatomic) NSMutableDictionary *store;

- (id)init;
- (void).cxx_destruct;
- (id)longDescription;
- (void)addFeedbackEntry:(id)a0;
- (void)removeFeedbackEntry:(id)a0;
- (void)_cleanupStore;
- (unsigned long long)sentFeedbackCount;
- (unsigned long long)unsentFeedbackCount;
- (BOOL)_saveStore;
- (BOOL)_loadStore;
- (id)_storePath;

@end
