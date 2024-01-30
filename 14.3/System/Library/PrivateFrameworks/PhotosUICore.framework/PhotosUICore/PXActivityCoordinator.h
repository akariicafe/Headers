@class NSMutableArray;

@interface PXActivityCoordinator : NSObject {
    NSMutableArray *_records;
}

+ (id)coordinatorForActivity:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_update;
- (void)unregisterItem:(id)a0;
- (void)registerItem:(id)a0;

@end
