@protocol NSCopying, NSObject;

@interface PFCacheEntry : NSObject {
    id<NSCopying, NSObject> _key;
    id _value;
    unsigned long long _createTime;
    unsigned long long _lastReadTime;
    unsigned long long _readCount;
}

- (void)touch;
- (unsigned long long)readCount;
- (unsigned long long)lastReadTime;
- (id)value;
- (id)key;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)createTime;
- (id)initWithKey:(id)a0 value:(id)a1;

@end
