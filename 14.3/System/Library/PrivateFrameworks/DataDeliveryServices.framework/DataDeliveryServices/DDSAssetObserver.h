@class NSSet, NSString;
@protocol DDSAssetObservingDelegate;

@interface DDSAssetObserver : NSObject <DDSAssetObserving>

@property (weak, nonatomic) id<DDSAssetObservingDelegate> delegate;
@property (retain, nonatomic) NSSet *typesToObserve;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)notifyObserversAssetsUpdatedForType:(id)a0;
- (void)endObservingTypes:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)observeAssetTypes:(id)a0;
- (void)beginObservingTypes:(id)a0;

@end
