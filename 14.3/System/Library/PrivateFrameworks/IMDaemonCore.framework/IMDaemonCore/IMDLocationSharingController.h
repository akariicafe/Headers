@class FMFSession;

@interface IMDLocationSharingController : NSObject {
    FMFSession *_session;
}

+ (id)sharedInstance;
+ (void)_addLocationShareItemToMatchingChats:(id)a0 handleID:(id)a1 hasStoredItem:(BOOL)a2 broadcastChanges:(BOOL)a3;
+ (void)addLocationShareItemToMatchingChats:(id)a0;

- (id)init;
- (void)didStopAbilityToGetLocationForHandle:(id)a0;
- (void)dealloc;
- (void)receivedIncomingLocationSharePacket:(id)a0;
- (void)_generateLocationSharingItemWithHandleID:(id)a0 direction:(long long)a1 action:(long long)a2;
- (void)didStartAbilityToGetLocationForHandle:(id)a0;
- (void)didStopSharingMyLocationWithHandle:(id)a0;
- (void)_forwardMappingPacket:(id)a0 toID:(id)a1 account:(id)a2;
- (void)didStartSharingMyLocationWithHandle:(id)a0;
- (void)sendMappingPacket:(id)a0 toHandle:(id)a1 account:(id)a2;
- (void)didFailToHandleMappingPacket:(id)a0 error:(id)a1;

@end
