@class NSMutableDictionary, NSMutableArray;

@interface PFUbiquityPeerSnapshotCollection : NSObject {
    NSMutableDictionary *_peerIDToTransactionNumberToSnapshot;
    NSMutableDictionary *_peerIDToTranasctionNumberToKnowledgeVector;
    NSMutableDictionary *_kvToSnapshot;
    NSMutableArray *_peerSnapshots;
    BOOL _needSort;
}

- (id)init;
- (void)dealloc;
- (void)addSnapshot:(id)a0;
- (id)allPeerIDs;
- (BOOL)calculateSnapshotDiffsWithError:(id *)a0;
- (id)snapshotForKnowledgeVector:(id)a0;
- (id)snapshotForPeerID:(id)a0 andTransactionNumber:(id)a1;
- (id)knowledgeVectorsForTransactionNumber:(id)a0 exportedByPeerWithID:(id)a1;

@end
