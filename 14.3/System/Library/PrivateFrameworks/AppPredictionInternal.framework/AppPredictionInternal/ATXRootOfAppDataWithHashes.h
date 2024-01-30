@class NSMutableDictionary;

@interface ATXRootOfAppDataWithHashes : ATXRootOfAppData {
    NSMutableDictionary *_dataForBundleId;
}

- (id)initWithSerialized:(id)a0;
- (id)serialize;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)recordSessionWithBundleId:(id)a0 firstAction:(id)a1;
- (unsigned long long)sessionCountForBundleId:(id)a0 firstAction:(id)a1;
- (unsigned long long)sessionCountForBundleId:(id)a0;

@end
