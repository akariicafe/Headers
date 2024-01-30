@protocol NSCopying, NSObject;

@interface PFCacheEntry : NSObject {
    id<NSCopying, NSObject> _key;
    id _value;
    unsigned long long _createTime;
    unsigned long long _lastReadTime;
    unsigned long long _readCount;
}

- (void).cxx_destruct;
- (void)touch;
- (id)value;
- (unsigned long long)createTime;
- (unsigned long long)lastReadTime;
- (id)description;
- (id)key;
- (id)initWithKey:(id)a0 value:(id)a1;
- (unsigned long long)readCount;

@end
