@class _PASCFBurstTrie;

@interface ATXGlobalSmartSuppression : NSObject {
    _PASCFBurstTrie *_associationScoresTrie;
}

+ (int)decodeAssociationScoreForContext:(unsigned long long)a0 forEncodedScore:(int)a1;
+ (int)decodeGeoAssociationScoreAtGeoHashResolution:(unsigned long long)a0 forEncodedScore:(int)a1;

- (id)fetchContextualAssociationScoresForBundleId:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
