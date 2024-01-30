@class NSString;
@protocol MSSearchDelegate;

@interface MSSearch : MSXPCService <MSDSearchResultsProtocol>

@property (weak, nonatomic) id<MSSearchDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)findMessageData:(id)a0 matchingCriterion:(id)a1 options:(unsigned long long)a2 delegate:(id)a3;
+ (id)findMessageData:(id)a0 matchingCriterion:(id)a1 shouldFetch:(BOOL)a2 onServer:(BOOL)a3 delegate:(id)a4;
+ (id)findMessageData:(id)a0 matchingCriterion:(id)a1 shouldFetch:(BOOL)a2 onServer:(BOOL)a3 onlyInboxes:(BOOL)a4 delegate:(id)a5;
+ (void)setUnitTestingResultsArray:(id)a0;

- (id)newConnectionForInterface:(id)a0;
- (id)initWithRemoteObjectInterface:(id)a0;
- (void)_generateUnitTestResponsesForResultArray:(id)a0;
- (id)_initWithDelegate:(id)a0;
- (void)_findMessageData:(id)a0 matchingCriterion:(id)a1 options:(unsigned long long)a2;
- (void)_delegateDidFindResults:(id)a0;
- (void)_delegateDidFinishWithError:(id)a0;
- (id)_generateUnitTestReplyForMethod:(id)a0 arg:(id)a1 error:(id *)a2;
- (void)foundResults:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (void)cancel;
- (BOOL)_unitTestsAreEnabled;

@end
