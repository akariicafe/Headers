@class NSObject;
@protocol CRKClassKitFacade, CRKCancelable, CRKClassKitCurrentUser;

@interface CRKClassKitCurrentUserProvider : NSObject

@property (readonly, nonatomic) NSObject<CRKClassKitFacade> *classKitFacade;
@property (retain, nonatomic) id<CRKClassKitCurrentUser> currentUser;
@property (nonatomic) BOOL currentUserFetched;
@property (retain, nonatomic) id<CRKCancelable> currentUserSubscription;
@property (nonatomic) unsigned long long sequenceNumber;

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (id)initWithClassKitFacade:(id)a0;
- (void)stopObservingCurrentUser;
- (void)startObservingCurrentUser;
- (void)updateCurrentUser;
- (BOOL)isSafeToTalkToProgressdWithAccountState:(long long)a0;
- (void)updateCurrentUser:(id)a0 fetched:(BOOL)a1;
- (void)safeFetchCurrentUserWithCompletion:(id /* block */)a0;
- (void)performKVOUpdateForKeyPaths:(id)a0 updateBlock:(id /* block */)a1;

@end
