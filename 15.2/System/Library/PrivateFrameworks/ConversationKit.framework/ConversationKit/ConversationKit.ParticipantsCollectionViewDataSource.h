@interface ConversationKit.ParticipantsCollectionViewDataSource : NSObject <UICollectionViewDataSource> {
    void /* unknown type, empty encoding */ onlineParticipants;
    void /* unknown type, empty encoding */ offlineParticipants;
    void /* unknown type, empty encoding */ participantIsShownInGrid;
    void /* unknown type, empty encoding */ didCreateCellForParticipant;
}

- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
