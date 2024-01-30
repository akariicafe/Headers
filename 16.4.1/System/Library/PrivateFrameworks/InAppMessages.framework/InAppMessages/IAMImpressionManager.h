@class NSMutableDictionary;
@protocol IAMImpressionManagerDelegate;

@interface IAMImpressionManager : NSObject {
    NSMutableDictionary *_activeImpressionForMessageIdentifierFromTargetIdentifier;
    NSMutableDictionary *_inactiveImpressionForMessageIdentifierFromTargetIdentifier;
    BOOL _isApplicationActive;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak, nonatomic) id<IAMImpressionManagerDelegate> delegate;

- (void)_reportImpressionEventWithDictionary:(id)a0;
- (void)_transitionToActiveState;
- (void)_reportImpression:(id)a0;
- (void)messageEntry:(id)a0 didAppearFromTargetWithIdentifier:(id)a1 atTime:(id)a2;
- (void)_handleApplicationWillResignActive;
- (void)dealloc;
- (void)_handleApplicationDidBecomeActive;
- (void)_transitionToInactiveState;
- (BOOL)_endImpressionForMessageWithIdentifier:(id)a0 fromTargetWithIdentifier:(id)a1 displayEndTime:(id)a2;
- (id)init;
- (void)messageWithIdentifier:(id)a0 didDisappearFromTargetWithIdentifier:(id)a1 atTime:(id)a2;
- (BOOL)_startImpressionForMessageEntry:(id)a0 fromTargetWithIdentifier:(id)a1 displayStartTime:(id)a2;
- (void).cxx_destruct;

@end
