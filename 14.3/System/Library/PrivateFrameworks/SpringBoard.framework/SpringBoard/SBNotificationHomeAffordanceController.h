@class NSString, NSMapTable, SBScreenEdgePanGestureRecognizer, SBHomeGesturePanGestureRecognizer, BSAnimationSettings;
@protocol UIViewSpringAnimationBehaviorDescribing;

@interface SBNotificationHomeAffordanceController : NSObject <SBHomeGestureParticipantDelegate> {
    NSMapTable *_clientsToParticipants;
    SBHomeGesturePanGestureRecognizer *_screenEdgePanGesture;
}

@property (readonly, nonatomic) SBScreenEdgePanGestureRecognizer *screenEdgePanGesture;
@property (readonly, nonatomic) BSAnimationSettings *hideHomeAffordanceAnimationSettings;
@property (readonly, nonatomic) BSAnimationSettings *unhideHomeAffordanceAnimationSettings;
@property (readonly, nonatomic) id<UIViewSpringAnimationBehaviorDescribing> settleHomeAffordanceAnimationBehaviorDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
