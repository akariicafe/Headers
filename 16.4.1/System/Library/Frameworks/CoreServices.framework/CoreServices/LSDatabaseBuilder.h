@class NSObject;
@protocol OS_dispatch_queue;

@interface LSDatabaseBuilder : NSObject {
    NSObject<OS_dispatch_queue> *_ioQueue;
}

- (void).cxx_destruct;
- (void)createAndSeedLocalDatabase:(BOOL *)a0;
- (id)initWithIOQueue:(id)a0;
- (void)seedCryptexContentIfNeeded:(BOOL *)a0;
- (void)setSeedingComplete:(BOOL)a0;
- (void)syncWithMI:(void *)a0;

@end
