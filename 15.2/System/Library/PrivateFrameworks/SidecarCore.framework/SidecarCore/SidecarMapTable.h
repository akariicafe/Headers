@class NSMapTable;

@interface SidecarMapTable : NSObject {
    long long _keyMask;
    NSMapTable *_keys2values;
    NSMapTable *_values2keys;
}

- (void).cxx_destruct;
- (id)initWithKeyMask:(long long)a0 weakObjects:(BOOL)a1;

@end
