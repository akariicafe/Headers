@class NSNumber, NSMapTable;

@interface QLItemFetcher : NSObject <NSSecureCoding> {
    NSMapTable *_observersToBlocks;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long fetchingState;
@property (readonly) NSNumber *itemSize;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)unregisterObserver:(id)a0;
- (id)init;
- (void)_notifyObservers;
- (void).cxx_destruct;
- (id)newItemProvider;
- (BOOL)canBeCanceled;
- (void)cancelFetch;
- (void)fetchContentWithAllowedOutputClasses:(id)a0 inQueue:(id)a1 updateBlock:(id /* block */)a2 completionBlock:(id /* block */)a3;
- (id)fetchedContent;
- (BOOL)isLongFetchOperation;
- (void)prepareShareableItem:(id /* block */)a0;
- (void)registerObserver:(id)a0 withBlock:(id /* block */)a1;
- (id)shareableItem;

@end
