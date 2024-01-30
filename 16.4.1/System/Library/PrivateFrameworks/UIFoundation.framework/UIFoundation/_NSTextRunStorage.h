@class NSStorage, NSTextRange, NSMutableRLEArray;
@protocol NSTextLocation, __NSTextRunStorageDataSource;

@interface _NSTextRunStorage : NSObject {
    NSMutableRLEArray *_RLEArray;
    NSStorage *_elements;
    NSTextRange *_seedRange;
    long long _seedElementIndex;
    BOOL _isCountable;
    BOOL _hasBaseLocation;
    BOOL _mapsLocationOffset;
    id<NSTextLocation> _baseLocation;
}

@property (readonly) long long baseIndex;
@property (readonly) id<NSTextLocation> baseLocation;
@property (readonly) id<__NSTextRunStorageDataSource> dataSource;

- (void)dealloc;
- (id)initWithDataSource:(id)a0;
- (id)description;
- (id)enumerateObjectsFromLocation:(id)a0 options:(long long)a1 usingBlock:(id /* block */)a2;
- (void)invalidateElementsInRange:(id)a0 delta:(long long)a1;
- (void)setObject:(id)a0 forRange:(id)a1;

@end
