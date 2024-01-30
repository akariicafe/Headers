@class NSArray, NSOperationQueue;

@interface AVGlobalOperationQueue : NSObject {
    NSOperationQueue *_operationQueue;
}

@property (readonly, copy) NSArray *unfinishedOperations;

+ (id)defaultQueue;

- (void)enqueueOperation:(id)a0;
- (id)init;
- (void)dealloc;
- (id)description;

@end
