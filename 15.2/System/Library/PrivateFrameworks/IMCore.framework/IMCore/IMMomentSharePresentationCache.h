@class NSString, NSMutableDictionary, IMMomentShareCache;
@protocol IMMomentSharePresentationCacheDelegate;

@interface IMMomentSharePresentationCache : NSObject <PXChangeObserver> {
    NSMutableDictionary *_cache;
    IMMomentShareCache *_momentShareCache;
}

@property (weak, nonatomic) id<IMMomentSharePresentationCacheDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_momentShareCacheDidChange:(id)a0;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void)registerMomentShareURLString:(id)a0;
- (id)initWithMomentShareCache:(id)a0;
- (id)statusPresentationForMomentShareURLString:(id)a0;
- (void)registerMomentShareItemForMessage:(id)a0;

@end
