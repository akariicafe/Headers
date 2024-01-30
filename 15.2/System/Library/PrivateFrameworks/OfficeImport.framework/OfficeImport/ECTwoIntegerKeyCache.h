@class OITSUIntegerKeyDictionary;

@interface ECTwoIntegerKeyCache : NSObject {
    OITSUIntegerKeyDictionary *mCache;
}

@property (nonatomic) BOOL assertForCollisions;

- (void).cxx_destruct;
- (id)init;
- (void)setObject:(id)a0 forKey1:(long long)a1 key2:(long long)a2;
- (id)objectForKey1:(long long)a0 key2:(long long)a1;

@end
