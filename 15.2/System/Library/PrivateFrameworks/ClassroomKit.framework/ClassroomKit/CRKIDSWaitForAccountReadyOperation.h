@class NSString, NSMutableDictionary, NSObject;
@protocol CRKIDSLocalPrimitives;

@interface CRKIDSWaitForAccountReadyOperation : CATOperation

@property (readonly, nonatomic) NSObject<CRKIDSLocalPrimitives> *IDSLocalPrimitives;
@property (readonly, copy, nonatomic) NSString *sourceAppleID;
@property (readonly, nonatomic) NSMutableDictionary *observedAccountsByLoginID;
@property (nonatomic, getter=isObservingKnownAccountChanges) BOOL observingKnownAccountChanges;

- (BOOL)isAsynchronous;
- (void)run;
- (void)main;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)cancel;
- (void)endObservingKnownAccountChanges;
- (void)endObservingAllAccounts;
- (void)beginObservingKnownAccountChanges;
- (void)knownAccountsDidChange;
- (void)beginObservingActiveChangesForAccount:(id)a0;
- (void)endObservingActiveChangesForAccount:(id)a0;
- (void)observedAccountDidChange:(id)a0;
- (id)initWithIDSLocalPrimitives:(id)a0 sourceAppleID:(id)a1;

@end
