@class NSMutableArray, NSFileAccessNode;

@interface NSFileMultipleAccessClaim : NSFileAccessClaim {
    NSMutableArray *_readingURLs;
    unsigned long long *_readingOptions;
    BOOL *_readingURLsDidChange;
    NSMutableArray *_writingURLs;
    unsigned long long *_writingOptions;
    BOOL *_writingURLsDidChange;
    NSMutableArray *_readingLocations;
    NSMutableArray *_writingLocations;
    NSFileAccessNode *_rootNode;
    unsigned long long _currentlyLinkResolvingURLIndex;
    long long _readingLinkResolutionCount;
}

+ (BOOL)supportsSecureCoding;

- (BOOL)isBlockedByWritingItemAtLocation:(id)a0 options:(unsigned long long)a1;
- (id)allURLs;
- (void)encodeWithCoder:(id)a0;
- (BOOL)blocksClaim:(id)a0;
- (BOOL)shouldCancelInsteadOfWaiting;
- (BOOL)evaluateSelfWithRootNode:(id)a0 checkSubarbitrability:(BOOL)a1;
- (id)initWithPurposeID:(id)a0 intents:(id)a1 claimer:(id /* block */)a2;
- (void)protectFilesAgainstEviction;
- (id)initWithCoder:(id)a0;
- (BOOL)shouldBeRevokedPriorToInvokingAccessor;
- (void)forwardUsingConnection:(id)a0 crashHandler:(id /* block */)a1;
- (void)itemAtLocation:(id)a0 wasReplacedByItemAtLocation:(id)a1;
- (void)devalueSelf;
- (void)invokeClaimer;
- (void)dealloc;
- (void)granted;
- (void)resolveURLsThenMaybeContinueInvokingClaimer:(id /* block */)a0;
- (BOOL)isBlockedByReadingItemAtLocation:(id)a0 options:(unsigned long long)a1;

@end
