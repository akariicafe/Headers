@class NSNumber, NSMapTable;

@interface QLItemFetcher : NSObject <NSSecureCoding> {
    NSMapTable *_observersToBlocks;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long fetchingState;
@property (readonly) NSNumber *itemSize;

- (id)init;
- (void)registerObserver:(id)a0 withBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)_notifyObservers;
- (BOOL)isLongFetchOperation;
- (void)fetchContentWithAllowedOutputClasses:(id)a0 inQueue:(id)a1 updateBlock:(id /* block */)a2 completionBlock:(id /* block */)a3;
- (id)shareableItem;
- (BOOL)canBeCanceled;
- (void)cancelFetch;
- (void)prepareShareableItem:(id /* block */)a0;
- (id)fetchedContent;
- (id)newItemProvider;
- (void)encodeWithCoder:(id)a0;

@end
