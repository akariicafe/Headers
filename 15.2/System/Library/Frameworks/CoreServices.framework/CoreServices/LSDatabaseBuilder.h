@class NSObject;
@protocol OS_dispatch_queue;

@interface LSDatabaseBuilder : NSObject {
    NSObject<OS_dispatch_queue> *_ioQueue;
}

- (id)initWithIOQueue:(id)a0;
- (void)createAndSeedLocalDatabase:(BOOL *)a0;
- (void).cxx_destruct;
- (void)syncWithMI:(void *)a0;
- (void)setSeedingComplete:(BOOL)a0;

@end
