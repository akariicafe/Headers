@class IMChat, NSString, NSArray, CKTranscriptCollectionView, UIView, CKImpactEffectManager, CKConversation, CKFullScreenEffectManager, NSObject, UITapGestureRecognizer, NSIndexSet;
@protocol OS_dispatch_group, CKGradientReferenceView, UIDragInteractionDelegate, CKTranscriptCollectionViewControllerDelegate;

@interface CKTranscriptController : CKCoreTranscriptController <CKCoreTranscriptControllerProtocol>

@property (readonly, nonatomic) NSString *transcriptIdentifier;
@property (readonly, nonatomic) CKConversation *conversation;
@property (readonly, nonatomic) IMChat *chat;
@property (readonly, nonatomic) CKTranscriptCollectionView *collectionView;
@property (readonly, copy, nonatomic) NSArray *chatItems;
@property (readonly, copy, nonatomic) NSArray *associatedChatItems;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } marginInsets;
@property (readonly, nonatomic) double balloonMaxWidth;
@property (weak, nonatomic) id<CKTranscriptCollectionViewControllerDelegate> delegate;
@property (retain, nonatomic) UIView<CKGradientReferenceView> *gradientReferenceView;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *updateAnimationGroup;
@property (copy, nonatomic) NSIndexSet *hiddenItems;
@property (copy, nonatomic) NSIndexSet *hiddenAssociatedItems;
@property (copy, nonatomic) NSIndexSet *hiddenBalloonViews;
@property (nonatomic, getter=isInitialLoad) BOOL initialLoad;
@property (nonatomic) BOOL shouldLoadDefaultConversationViewingMessageCountOnAppear;
@property (retain, nonatomic) CKImpactEffectManager *impactEffectManager;
@property (retain, nonatomic) CKFullScreenEffectManager *fullscreenEffectManager;
@property (nonatomic) BOOL transitionedFromComposing;
@property (nonatomic) BOOL transitioningFromComposing;
@property (nonatomic, getter=isTranscriptUpdateAnimated) BOOL transcriptUpdateAnimated;
@property (nonatomic) BOOL allowsPluginPlayback;
@property (nonatomic) double pluginPlaybackDelay;
@property (retain, nonatomic, setter=__setCurrentTestName:) NSString *__CurrentTestName;
@property (nonatomic) long long contentAnimationPauseReasons;
@property (weak, nonatomic) id<UIDragInteractionDelegate> dragInteractionDelegate;
@property (retain, nonatomic) UITapGestureRecognizer *loggingTapGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
