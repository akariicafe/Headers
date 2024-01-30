@class NSCache, SKStatusPublishingService, NSObject;
@protocol OS_dispatch_queue;

@interface IMAvailabilityInvitationManager : NSObject

@property (retain, nonatomic) SKStatusPublishingService *publishingService;
@property (retain, nonatomic) NSCache *dateAttemptedInvitationByHandleCache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dndBackgroundQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)manuallyShareFocusStatusWithHandleID:(id)a0 fromHandleID:(id)a1 completion:(id /* block */)a2;
- (void)manuallyRemoveSharingOfFocusStatusWithHandleID:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (BOOL)availabilityEnabled;
- (BOOL)_isHandleIDEligibleToReceiveAutomaticInvitation:(id)a0;
- (id)_invitationCacheKeyForHandleID:(id)a0 fromHandleID:(id)a1;
- (id)_skHandleForString:(id)a0;
- (void)_isFocusStatusSharedWithHandle:(id)a0 fromHandle:(id)a1 completion:(id /* block */)a2;
- (void)_sharePersonalAvailabilityWithSKHandle:(id)a0 fromSKHandle:(id)a1 allowingInvitationOfRemovedUsers:(BOOL)a2 completion:(id /* block */)a3;
- (void)_invitablityForHandle:(id)a0 fromHandle:(id)a1 completion:(id /* block */)a2;
- (void)_republishCurrentAvailabilityStatus;
- (id)_dndHandleForHandleID:(id)a0;
- (void)_invitationPayloadForHandleID:(id)a0 completion:(id /* block */)a1;
- (id)_newDNDModeConfigurationService;
- (void)attemptIfNeccessaryToAutomaticallyShareFocusStatusWithHandleID:(id)a0 fromHandleID:(id)a1 completion:(id /* block */)a2;
- (void)repairSharedFocusStatusFollowingFailedValidationWithHandleID:(id)a0 fromHandleID:(id)a1 completion:(id /* block */)a2;
- (void)isFocusStatusSharedWithHandleID:(id)a0 fromHandleID:(id)a1 completion:(id /* block */)a2;

@end
