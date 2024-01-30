@class NSMutableDictionary;
@protocol PXReusableObjectPoolDelegate;

@interface PXReusableObjectPool : NSObject {
    struct { BOOL respondsToDidCreateReusableObject; BOOL respondsToObjectBecameReusable; BOOL respondsToObjectPreparedForReuse; } _delegateFlags;
}

@property (readonly, nonatomic) NSMutableDictionary *_objectCreationBlocksByReuseIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *_reusableObjectsByReuseIdentifier;
@property (weak, nonatomic) id<PXReusableObjectPoolDelegate> delegate;

- (void)registerReusableObjectForReuseIdentifier:(long long)a0 creationHandler:(id /* block */)a1;
- (void)removeAllReusableObjectsWithReuseIdentifier:(long long)a0;
- (id)checkOutReusableObjectWithReuseIdentifier:(long long)a0;
- (id)init;
- (void)checkInReusableObject:(id)a0;
- (void).cxx_destruct;

@end
