@class NSMutableArray, NSMutableDictionary;

@interface BLTSectionInfoSyncCoordinator : NSObject {
    unsigned long long _stateHandler;
}

@property (copy, nonatomic) id /* block */ infoProvider;
@property (retain, nonatomic) NSMutableArray *alertingSectionIDs;
@property (retain, nonatomic) NSMutableDictionary *alertingSectionState;
@property (nonatomic) unsigned long long mostRecentIndex;
@property (nonatomic) unsigned long long mostRecentIndexSinceSync;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithAlertingSectionIDs:(id)a0 infoProvider:(id /* block */)a1;
- (unsigned long long)performSyncForSectionID:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (id)effectiveSectionInfoForSectionIDIndex:(unsigned long long)a0;
- (void)sectionInfoSendCompleted:(unsigned long long)a0;

@end
