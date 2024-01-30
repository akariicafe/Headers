@class C2Session, NSString;

@interface C2SessionTLSCache : NSObject <C2SessionDelegate>

@property (retain, nonatomic) C2Session *pinnedSession;
@property (retain, nonatomic) C2Session *unpinnedSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)sessionForOptions:(id)a0;
- (id)_createSessionWithTLSPinning:(BOOL)a0;
- (id)underlyingDelegateQueue;
- (void)C2Session:(id)a0 didBecomeInvalidWithError:(id)a1;
- (void)C2Session:(id)a0 originalHost:(id)a1 updatedRoute:(id)a2;

@end
