@interface SFTokenBucket : NSObject {
    unsigned long long _bucketSize;
    unsigned long long _tokensAvailable;
    unsigned long long _tokenDurationTicks;
    unsigned long long _lastRefreshTicks;
}

- (id)initWithBucketSize:(unsigned long long)a0 tokensPerSec:(double)a1;
- (id)init;
- (id)initWithBucketSize:(unsigned long long)a0 tokenDurationTicks:(unsigned long long)a1;
- (id)initWithBucketSize:(unsigned long long)a0 tokenDurationSec:(double)a1;
- (BOOL)acquireToken;

@end
