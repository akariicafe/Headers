@class GKChallengeInternal;
@protocol GKChallengeEventHandlerUIDelegate, GKChallengeEventHandlerDelegate;

@interface GKChallengeEventHandler : NSObject

@property (retain, nonatomic) GKChallengeInternal *pendingReceivedChallenge;
@property (retain, nonatomic) GKChallengeInternal *pendingCompletedChallenge;
@property (retain, nonatomic) id<GKChallengeEventHandlerUIDelegate> uiDelegate;
@property (weak, nonatomic) id<GKChallengeEventHandlerDelegate> delegate;

+ (id)challengeEventHandler;

- (void)completedChallengeSelected:(id)a0;
- (void).cxx_destruct;
- (void)receivedChallengeSelected:(id)a0;
- (void)challengeCompleted:(id)a0;
- (void)challengeReceived:(id)a0;
- (void)showBannerForChallenge:(id)a0 complete:(id /* block */)a1;

@end
