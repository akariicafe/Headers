@interface ConversationKit.InCallControlsCollectionViewController : UIViewController <UICollectionViewDelegate> {
    void /* unknown type, empty encoding */ updatedCapabilitiesWithParticipants;
    void /* unknown type, empty encoding */ capabilitiesChecker;
    void /* unknown type, empty encoding */ participants;
    void /* unknown type, empty encoding */ isLegacy;
    void /* unknown type, empty encoding */ featureFlagChecker;
    void /* unknown type, empty encoding */ activeRemoteParticipantsCount;
    void /* unknown type, empty encoding */ activitySession;
    void /* unknown type, empty encoding */ conversation;
    void /* unknown type, empty encoding */ mode;
    void /* unknown type, empty encoding */ gridLayoutStyle;
    void /* unknown type, empty encoding */ isOnScreen;
    void /* unknown type, empty encoding */ controlsManager;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ remoteAudioPaused;
    void /* unknown type, empty encoding */ participantsViewControllerDelegate;
    void /* unknown type, empty encoding */ inCallControlsCollectionViewControllerDelegate;
    void /* unknown type, empty encoding */ collectionView;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ shareLinkEnabled;
    void /* unknown type, empty encoding */ updateDataSourceNeedsRefreshParticipants;
    void /* unknown type, empty encoding */ updateDataSourceNeedsAnimatedDifferences;
    void /* unknown type, empty encoding */ updateDataSourceSubject;
    void /* unknown type, empty encoding */ updateDataSourceDebouncer;
    void /* unknown type, empty encoding */ sectionHeaderViewRegistration;
    void /* unknown type, empty encoding */ activityCellRegistration;
    void /* unknown type, empty encoding */ titleCellRegistration;
    void /* unknown type, empty encoding */ statusCellRegistration;
    void /* unknown type, empty encoding */ participantCellRegistration;
    void /* unknown type, empty encoding */ addParticipantCellRegistration;
    void /* unknown type, empty encoding */ linkLayoutCellRegistration;
    void /* unknown type, empty encoding */ ignoreLMIRequestsCellRegistration;
    void /* unknown type, empty encoding */ fallbackCellRegistration;
}

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)handleContentSizeCategoryDidChange:(id)a0;

@end
