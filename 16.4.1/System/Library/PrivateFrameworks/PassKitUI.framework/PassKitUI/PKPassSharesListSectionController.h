@class NSString, NSArray, PKPassShare, PKSharedPassSharesController;
@protocol PKPassSharesListSectionControllerDelegate;

@interface PKPassSharesListSectionController : PKPassShareSectionController <PKSharedPassSharesControllerDelegate> {
    unsigned long long _mode;
    PKSharedPassSharesController *_sharesController;
    PKPassShare *_rootShare;
    NSArray *_shareItems;
    NSArray *_actionItems;
}

@property (weak, nonatomic) id<PKPassSharesListSectionControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)didSelectItem:(id)a0;
- (void)sharedPassSharesControllerDidUpdateShares:(id)a0;
- (id)_alertForRevokeOptionsForShare:(id)a0;
- (id)_alertForDisplayableError:(id)a0;
- (void)_confirmRevokeShare:(id)a0;
- (id)_contactForShareRowItem:(id)a0;
- (id)_displayableShares;
- (void)_revokeAllShares;
- (void)_revokeShare:(id)a0 cascade:(BOOL)a1;
- (id)_subtitleForShare:(id)a0;
- (id)_titleForShareRowItem:(id)a0;
- (void)_updateShareRowItems;
- (void)_updateStopSharingItemToDisabled:(BOOL)a0;
- (id)decorateListCell:(id)a0 forShareRowItem:(id)a1;
- (id)headerAttributedStringForIdentifier:(id)a0;
- (id)initWithMode:(unsigned long long)a0 sharesController:(id)a1 rootShare:(id)a2 delegate:(id)a3;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;

@end
