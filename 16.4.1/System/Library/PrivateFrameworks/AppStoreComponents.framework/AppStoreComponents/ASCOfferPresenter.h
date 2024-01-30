@class NSString, ASCAppOfferStateMachine, ASCPresenterContext, ASCOfferPresenterViewState;
@protocol ASCOfferPresenterView, ASCOfferPresenterObserver, ASCOffer;

@interface ASCOfferPresenter : NSObject <ASCAppOfferStateMachineDelegate>

@property (readonly, weak, nonatomic) id<ASCOfferPresenterView> view;
@property (readonly, nonatomic) ASCPresenterContext *context;
@property (retain, nonatomic) ASCAppOfferStateMachine *offerStateMachine;
@property (retain, nonatomic) NSString *mostRecentAppState;
@property (retain, nonatomic) ASCOfferPresenterViewState *savedStateForConfirm;
@property (weak, nonatomic) id<ASCOfferPresenterObserver> observer;
@property (copy, nonatomic) id<ASCOffer> offer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithView:(id)a0;
- (void).cxx_destruct;
- (BOOL)clearConfirmForNewStateIfNeeded;
- (BOOL)confirmOfferActionIfNeeded;
- (id)initWithView:(id)a0 context:(id)a1;
- (void)offerStateDidChange:(id)a0 withMetadata:(id)a1 isActionable:(BOOL)a2;
- (void)offerStatusTextDidChange:(id)a0;
- (void)performOfferAction;

@end
