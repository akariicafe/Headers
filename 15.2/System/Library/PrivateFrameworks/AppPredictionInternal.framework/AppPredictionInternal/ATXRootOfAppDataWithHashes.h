@class NSMutableDictionary;

@interface ATXRootOfAppDataWithHashes : ATXRootOfAppData {
    NSMutableDictionary *_dataForBundleId;
}

- (id)serialize;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithSerialized:(id)a0;
- (void)recordSessionWithBundleId:(id)a0 firstAction:(id)a1;
- (unsigned long long)sessionCountForBundleId:(id)a0 firstAction:(id)a1;
- (unsigned long long)sessionCountForBundleId:(id)a0;

@end
