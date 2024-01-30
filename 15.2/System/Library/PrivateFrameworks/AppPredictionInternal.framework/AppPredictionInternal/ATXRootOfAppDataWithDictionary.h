@class NSMutableDictionary;

@interface ATXRootOfAppDataWithDictionary : ATXRootOfAppData {
    NSMutableDictionary *_sessionCounts;
    NSMutableDictionary *_firstUA;
}

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)recordSessionWithBundleId:(id)a0 firstAction:(id)a1;
- (unsigned long long)sessionCountForBundleId:(id)a0 firstAction:(id)a1;
- (unsigned long long)sessionCountForBundleId:(id)a0;

@end
