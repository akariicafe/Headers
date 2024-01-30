@class NSURL, NSFileAccessNode;

@interface NSFileReadingWritingClaim : NSFileAccessClaim {
    NSURL *_readingURL;
    BOOL _readingURLDidChange;
    unsigned long long _readingOptions;
    NSURL *_writingURL;
    BOOL _writingURLDidChange;
    unsigned long long _writingOptions;
    NSFileAccessNode *_readingLocation;
    NSFileAccessNode *_writingLocation;
    NSFileAccessNode *_rootNode;
    long long _readingLinkResolutionCount;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void)protectFilesAgainstEviction;
- (void)invokeClaimer;
- (BOOL)evaluateSelfWithRootNode:(id)a0 checkSubarbitrability:(BOOL)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)isBlockedByWritingItemAtLocation:(id)a0 options:(unsigned long long)a1;
- (BOOL)shouldCancelInsteadOfWaiting;
- (void)itemAtLocation:(id)a0 wasReplacedByItemAtLocation:(id)a1;
- (void)granted;
- (void)dealloc;
- (BOOL)isBlockedByReadingItemAtLocation:(id)a0 options:(unsigned long long)a1;
- (id)allURLs;
- (BOOL)blocksClaim:(id)a0;
- (void)forwardUsingConnection:(id)a0 crashHandler:(id /* block */)a1;
- (void)resolveURLsThenMaybeContinueInvokingClaimer:(id /* block */)a0;
- (id)initWithPurposeID:(id)a0 readingURL:(id)a1 options:(unsigned long long)a2 writingURL:(id)a3 options:(unsigned long long)a4 claimer:(id /* block */)a5;
- (void)devalueSelf;

@end
