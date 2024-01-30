@class _PASCFBurstTrie;

@interface ATXGlobalSmartSuppression : NSObject {
    _PASCFBurstTrie *_associationScoresTrie;
}

+ (int)decodeGeoAssociationScoreAtGeoHashResolution:(unsigned long long)a0 forEncodedScore:(int)a1;
+ (int)decodeAssociationScoreForContext:(unsigned long long)a0 forEncodedScore:(int)a1;

- (id)init;
- (void).cxx_destruct;
- (id)fetchContextualAssociationScoresForBundleId:(id)a0;

@end
