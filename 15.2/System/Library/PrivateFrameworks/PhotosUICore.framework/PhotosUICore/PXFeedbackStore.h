@class NSMutableDictionary;

@interface PXFeedbackStore : NSObject

@property (readonly, nonatomic) NSMutableDictionary *store;

- (void).cxx_destruct;
- (id)init;
- (id)_storePath;
- (id)longDescription;
- (void)addFeedbackEntry:(id)a0;
- (void)removeFeedbackEntry:(id)a0;
- (unsigned long long)sentFeedbackCount;
- (unsigned long long)unsentFeedbackCount;
- (void)_cleanupStore;
- (BOOL)_saveStore;
- (BOOL)_loadStore;

@end
