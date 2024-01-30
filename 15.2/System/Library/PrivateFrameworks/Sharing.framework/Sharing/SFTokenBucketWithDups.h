@class SFTokenBucket;

@interface SFTokenBucketWithDups : NSObject {
    SFTokenBucket *_bucket;
    unsigned long long _maxDups;
    struct __CFArray { } *_dups;
}

- (id)initWithBucket:(id)a0 dupHistoryLength:(unsigned long long)a1;
- (void).cxx_destruct;
- (BOOL)acquireTokenForIdentifier:(unsigned long long)a0;
- (id)init;
- (void)dealloc;

@end
