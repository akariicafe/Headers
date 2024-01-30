@class NSURL, NSFileAccessNode;

@interface NSFileReadingClaim : NSFileAccessClaim {
    NSURL *_url;
    BOOL _urlDidChange;
    unsigned long long _options;
    NSFileAccessNode *_location;
    NSFileAccessNode *_rootNode;
    long long _linkResolutionCount;
}

+ (BOOL)supportsSecureCoding;

- (BOOL)isBlockedByWritingItemAtLocation:(id)a0 options:(unsigned long long)a1;
- (id)allURLs;
- (void)encodeWithCoder:(id)a0;
- (BOOL)blocksClaim:(id)a0;
- (BOOL)shouldCancelInsteadOfWaiting;
- (BOOL)evaluateSelfWithRootNode:(id)a0 checkSubarbitrability:(BOOL)a1;
- (void)protectFilesAgainstEviction;
- (void)resolveURLThenMaybeContinueInvokingClaimer:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPurposeID:(id)a0 url:(id)a1 options:(unsigned long long)a2 claimer:(id /* block */)a3;
- (BOOL)shouldBeRevokedPriorToInvokingAccessor;
- (void)forwardUsingConnection:(id)a0 crashHandler:(id /* block */)a1;
- (void)itemAtLocation:(id)a0 wasReplacedByItemAtLocation:(id)a1;
- (void)devalueSelf;
- (void)invokeClaimer;
- (void)dealloc;
- (void)granted;
- (BOOL)isBlockedByReadingItemAtLocation:(id)a0 options:(unsigned long long)a1;

@end
