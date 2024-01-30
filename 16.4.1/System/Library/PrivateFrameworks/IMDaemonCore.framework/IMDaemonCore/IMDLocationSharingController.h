@class FMFSession;

@interface IMDLocationSharingController : NSObject {
    FMFSession *_session;
}

+ (id)sharedInstance;
+ (void)_addLocationShareItemToMatchingChats:(id)a0 handleID:(id)a1 hasStoredItem:(BOOL)a2 broadcastChanges:(BOOL)a3;
+ (void)addLocationShareItemToMatchingChats:(id)a0;

- (void)didFailToHandleMappingPacket:(id)a0 error:(id)a1;
- (void)didStopAbilityToGetLocationForHandle:(id)a0;
- (void)_forwardMappingPacket:(id)a0 toID:(id)a1 account:(id)a2;
- (void)receivedIncomingLocationSharePacket:(id)a0;
- (void)dealloc;
- (void)_generateLocationSharingItemWithHandleID:(id)a0 direction:(long long)a1 action:(long long)a2;
- (void)didStopSharingMyLocationWithHandle:(id)a0;
- (void)sendMappingPacket:(id)a0 toHandle:(id)a1 account:(id)a2;
- (id)init;
- (void)didStartSharingMyLocationWithHandle:(id)a0;
- (void)didStartAbilityToGetLocationForHandle:(id)a0;

@end
