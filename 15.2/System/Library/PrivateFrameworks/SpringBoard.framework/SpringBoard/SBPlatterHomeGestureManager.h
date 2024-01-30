@class NSString, NSMapTable;
@protocol SBPlatterHomeGestureManagerDelegate;

@interface SBPlatterHomeGestureManager : NSObject <SBPlatterHomeGestureContextDelegate> {
    NSMapTable *_participantsToHomeGestureContexts;
}

@property (readonly, weak, nonatomic) id<SBPlatterHomeGestureManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id)_allParticipants;
- (id)registerParticipant:(id)a0;
- (void)unregisterParticipant:(id)a0;
- (id)_homeGestureContextForParticipant:(id)a0 creatingIfNecessary:(BOOL)a1;
- (void)_removeHomeGestureContextForParticipant:(id)a0;
- (id)_participantForHomeGestureContext:(id)a0;
- (void)wantsHomeGestureDidChangeForBannerManagerHomeGestureContext:(id)a0;
- (void)bannerManagerHomeGestureContext:(id)a0 homeGestureOwnershipDidChange:(BOOL)a1;
- (id)keyboardHomeAffordanceAssertionForBannerManagerHomeGestureContext:(id)a0;
- (id)gestureRecognizerPriorityAssertionForBannerManagerHomeGestureContext:(id)a0;

@end
