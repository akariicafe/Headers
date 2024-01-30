@class NSMutableArray;

@interface _PXImportConcurrentActionManager : NSObject {
    NSMutableArray *_operations;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)addOperation:(id)a0;
- (void)removeOperation:(id)a0;

@end
