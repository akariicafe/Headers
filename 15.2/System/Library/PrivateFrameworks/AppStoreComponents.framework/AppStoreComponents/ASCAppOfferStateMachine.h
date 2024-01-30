@class NSString, ASCAppOfferSavedState, ASCAppOfferStateCenter, NSMutableArray;
@protocol ASCOffer;

@interface ASCAppOfferStateMachine : NSObject

@property (readonly, nonatomic) id<ASCOffer> offer;
@property (readonly, weak, nonatomic) ASCAppOfferStateCenter *stateCenter;
@property (readonly, nonatomic) NSMutableArray *delegates;
@property (retain, nonatomic) ASCAppOfferSavedState *mostRecentState;
@property (copy, nonatomic) NSString *mostRecentStatusText;
@property (retain, nonatomic) ASCAppOfferSavedState *overrideState;

- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)enumerateDelegatesUsingBlock:(id /* block */)a0;
- (void)offerStatusTextDidChange:(id)a0;
- (void)offerStateDidChange:(id)a0 withMetadata:(id)a1 flags:(long long)a2;
- (id)initWithOffer:(id)a0 stateCenter:(id)a1;
- (id)performActionWithActivity:(id)a0;
- (void)installTemporaryWaitingState;
- (void)invalidateTemporaryStateForcingUpdate:(BOOL)a0;

@end
