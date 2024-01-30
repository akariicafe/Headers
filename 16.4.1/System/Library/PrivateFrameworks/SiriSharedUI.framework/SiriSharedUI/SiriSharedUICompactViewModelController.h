@class AFConversation, SiriSharedUICompactViewModel, NSMutableArray;
@protocol SiriSharedUICompactViewModelChangeObserving, SiriSharedUICompactViewModelControllerDelegate;

@interface SiriSharedUICompactViewModelController : NSObject

@property (copy, nonatomic) SiriSharedUICompactViewModel *viewModel;
@property (readonly, nonatomic) AFConversation *conversation;
@property (readonly, nonatomic) BOOL alwaysShowRecognizedSpeech;
@property (readonly, nonatomic) long long inputType;
@property (nonatomic) BOOL immersiveExperienceOn;
@property (readonly, nonatomic) NSMutableArray *serverUtteranceConversationIds;
@property (weak, nonatomic) id<SiriSharedUICompactViewModelChangeObserving> viewModelChangeObserver;
@property (weak, nonatomic) id<SiriSharedUICompactViewModelControllerDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithConversation:(id)a0 delegate:(id)a1;
- (unsigned long long)_generateDiffFromViewModel:(id)a0 toViewModel:(id)a1;
- (id)_instrumentationManager;
- (void)_notifyObserverOfViewModelChangeWithDiff:(unsigned long long)a0;
- (void)_processInitialConversationItems;
- (void)_processInsertedConversationItems:(id)a0;
- (void)_processUpdatedConversationItemsAtIndexPaths:(id)a0;
- (id)_serverUtterancesToDisplay;
- (id)_userUtteranceForConversationItem:(id)a0;
- (void)conversationDidChangeWithTransaction:(id)a0;
- (void)inputTypeDidChange;
- (void)resetViewsAndClearASR:(BOOL)a0;
- (void)revealUserUtterance:(id)a0 backingAceObject:(id)a1;

@end
