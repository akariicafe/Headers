@class NSData, NSString, NSMutableArray;

@interface FPXItemsObserver : FPXObserver <NSFileProviderEnumerationObserver> {
    NSMutableArray *_items;
}

@property (copy) id /* block */ finishedBlock;
@property (copy) NSData *syncAnchor;
@property (nonatomic) long long suggestedPageSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didEnumerateItems:(id)a0;
- (void)finishEnumeratingWithError:(id)a0;
- (void).cxx_destruct;
- (id)initWithObservedItemID:(id)a0 domainContext:(id)a1 nsFileProviderRequest:(id)a2;
- (void)finishEnumeratingUpToPage:(id)a0;

@end
