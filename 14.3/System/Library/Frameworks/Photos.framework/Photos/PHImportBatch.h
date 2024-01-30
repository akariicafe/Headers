@class PHImportTimerCollection, NSDate, NSObject, NSMutableArray;
@protocol OS_dispatch_semaphore;

@interface PHImportBatch : NSObject {
    NSDate *_start;
}

@property (readonly, nonatomic) NSMutableArray *records;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) PHImportTimerCollection *timers;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;

- (id)init;
- (void).cxx_destruct;

@end
