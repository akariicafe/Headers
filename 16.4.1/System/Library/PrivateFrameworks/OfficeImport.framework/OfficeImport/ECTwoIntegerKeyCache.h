@class OITSUIntegerKeyDictionary;

@interface ECTwoIntegerKeyCache : NSObject {
    OITSUIntegerKeyDictionary *mCache;
}

@property (nonatomic) BOOL assertForCollisions;

- (id)init;
- (void).cxx_destruct;
- (id)objectForKey1:(long long)a0 key2:(long long)a1;
- (void)setObject:(id)a0 forKey1:(long long)a1 key2:(long long)a2;

@end
