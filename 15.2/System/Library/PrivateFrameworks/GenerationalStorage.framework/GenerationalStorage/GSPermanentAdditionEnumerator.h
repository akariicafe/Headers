@class NSString, NSArray, GSDaemonProxySync, NSError, GSPermanentStorage;

@interface GSPermanentAdditionEnumerator : NSEnumerator <GSAdditionEnumerating> {
    GSPermanentStorage *_storage;
    NSString *_nameSpace;
    unsigned long long _withOptions;
    unsigned long long _withoutOptions;
    NSArray *_array;
    unsigned long long _pos;
    GSDaemonProxySync *_proxy;
    id _token;
}

@property (readonly, nonatomic) NSError *error;

- (id)nextObject;
- (void)_fetchNextBatch;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithStorage:(id)a0 nameSpace:(id)a1 withOptions:(unsigned long long)a2 withoutOptions:(unsigned long long)a3 ordering:(int)a4;

@end
