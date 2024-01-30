@class NSObject, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface SNFileSystem : NSObject

@property (retain, nonatomic) NSMutableArray *requests;
@property (retain, nonatomic) NSMutableDictionary *taskCompletionMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)removeRequest:(id)a0;
- (void)_removeRequest:(id)a0 error:(id)a1;
- (void)addRequest:(id)a0 completionHandler:(id /* block */)a1 resultsHandler:(id /* block */)a2;

@end
