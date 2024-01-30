@class NSData, NSMutableArray, NSString;

@interface LiveFSFPTrashObserver : NSObject <NSFileProviderEnumerationObserver>

@property (retain) NSMutableArray *items;
@property (copy) id /* block */ completionHandler;
@property (readonly, retain) NSData *lastPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithCompletionHandler:(id /* block */)a0;

- (void)finishEnumeratingWithError:(id)a0;
- (void)didEnumerateItems:(id)a0;
- (void)finishEnumeratingUpToPage:(id)a0;
- (id)initWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
