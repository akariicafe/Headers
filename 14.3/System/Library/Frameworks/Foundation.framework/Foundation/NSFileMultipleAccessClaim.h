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

- (void)forwardUsingConnection:(id)a0 crashHandler:(id /* block */)a1;
- (id)allURLs;
- (void)dealloc;
- (void)itemAtLocation:(id)a0 wasReplacedByItemAtLocation:(id)a1;
- (BOOL)isBlockedByReadingItemAtLocation:(id)a0 options:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)evaluateSelfWithRootNode:(id)a0 checkSubarbitrability:(BOOL)a1;
- (void)granted;
- (id)initWithPurposeID:(id)a0 intents:(id)a1 claimer:(id /* block */)a2;
- (void)resolveURLsThenMaybeContinueInvokingClaimer:(id /* block */)a0;
- (BOOL)isBlockedByWritingItemAtLocation:(id)a0 options:(unsigned long long)a1;
- (void)devalueSelf;
- (void)invokeClaimer;
- (void)protectFilesAgainstEviction;
- (BOOL)shouldBeRevokedPriorToInvokingAccessor;
- (BOOL)shouldCancelInsteadOfWaiting;
- (BOOL)blocksClaim:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
