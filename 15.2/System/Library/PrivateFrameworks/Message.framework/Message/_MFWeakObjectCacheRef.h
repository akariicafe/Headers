@class MFWeakObjectCache;
@protocol NSCopying;

@interface _MFWeakObjectCacheRef : NSObject

@property (copy, nonatomic) id<NSCopying> key;
@property (weak, nonatomic) MFWeakObjectCache *cache;

- (void).cxx_destruct;
- (void)dealloc;

@end
