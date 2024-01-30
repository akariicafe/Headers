@class NSArray, CRKIDSAccountsState, NSObject;
@protocol CRKIDSLocalPrimitives;

@interface CRKIDSAccountsEvaluator : NSObject

@property (readonly, nonatomic) NSObject<CRKIDSLocalPrimitives> *IDSLocalPrimitives;
@property (copy, nonatomic) NSArray *observedAccounts;
@property (retain, nonatomic) CRKIDSAccountsState *state;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)updateState;
- (void).cxx_destruct;
- (void)endObservingKnownAccountChanges;
- (void)beginObservingAccounts:(id)a0;
- (void)beginObservingKnownAccountChanges;
- (void)endObservingAccounts:(id)a0;
- (id)initWithIDSLocalPrimitives:(id)a0;
- (void)knownAccountsDidChange;
- (void)observedAccountDidChange:(id)a0;

@end
