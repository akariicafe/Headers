@class NSArray, NSMutableArray, HMFUnfairLock;

@interface HMDUserActionPredictionContainer : HMFObject {
    HMFUnfairLock *_lock;
    BOOL _sortedPredictionsByServiceGroupNeedsUpdate;
}

@property (retain, nonatomic) NSMutableArray *sortedPredictionGroups;
@property (copy) NSArray *sortedPredictionsByServiceGroup;
@property (readonly, copy) NSArray *allPredictions;

- (void).cxx_destruct;
- (id)init;
- (unsigned long long)addOrUpdatePrediction:(id)a0;
- (unsigned long long)removePrediction:(id)a0;
- (id)createPredictionGroupForPrediction:(id)a0;
- (unsigned long long)_insertPredictionGroup:(id)a0;
- (id)_movePrediction:(id)a0 fromGroup:(id)a1 intoGroup:(id)a2;

@end
