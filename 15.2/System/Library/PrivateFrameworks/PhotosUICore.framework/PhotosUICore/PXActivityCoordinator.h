@class NSMutableArray;

@interface PXActivityCoordinator : NSObject {
    NSMutableArray *_records;
}

+ (id)coordinatorForActivity:(id)a0;

- (void)unregisterItem:(id)a0;
- (void)registerItem:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_update;

@end
