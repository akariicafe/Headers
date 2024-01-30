@class NSMutableDictionary;

@interface ATXRootOfAppDataWithDictionary : ATXRootOfAppData {
    NSMutableDictionary *_sessionCounts;
    NSMutableDictionary *_firstUA;
}

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)recordSessionWithBundleId:(id)a0 firstAction:(id)a1;
- (unsigned long long)sessionCountForBundleId:(id)a0 firstAction:(id)a1;
- (unsigned long long)sessionCountForBundleId:(id)a0;

@end
