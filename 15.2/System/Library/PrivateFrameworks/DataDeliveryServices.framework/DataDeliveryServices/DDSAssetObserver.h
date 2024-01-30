@class NSSet, NSString;
@protocol DDSAssetObservingDelegate;

@interface DDSAssetObserver : NSObject <DDSAssetObserving>

@property (weak, nonatomic) id<DDSAssetObservingDelegate> delegate;
@property (retain, nonatomic) NSSet *typesToObserve;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)observeAssetTypes:(id)a0;
- (void)notifyObserversAssetsUpdatedForType:(id)a0;
- (void)dealloc;
- (void)beginObservingTypes:(id)a0;
- (void)endObservingTypes:(id)a0;

@end
