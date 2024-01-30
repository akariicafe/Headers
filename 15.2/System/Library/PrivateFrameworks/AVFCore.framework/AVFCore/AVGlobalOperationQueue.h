@class NSArray, NSOperationQueue;

@interface AVGlobalOperationQueue : NSObject {
    NSOperationQueue *_operationQueue;
}

@property (readonly, copy) NSArray *unfinishedOperations;

+ (id)defaultQueue;

- (void)enqueueOperation:(id)a0;
- (id)description;
- (id)init;
- (void)dealloc;

@end
