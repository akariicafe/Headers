@class NSSet, NSString;
@protocol DDSAssetObservingDelegate;

@interface DDSAssetObserver : NSObject <DDSAssetObserving>

@property (retain, nonatomic) NSSet *typesToObserve;
@property (weak) id<DDSAssetObservingDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)notifyObserversAssetsUpdatedForType:(id)a0;
- (void)endObservingTypes:(id)a0;
- (void)dealloc;
- (void)beginObservingTypes:(id)a0;
- (void)observeAssetTypes:(id)a0;
- (void).cxx_destruct;

@end
