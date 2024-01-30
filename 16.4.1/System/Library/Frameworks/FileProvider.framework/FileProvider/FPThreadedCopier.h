@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface FPThreadedCopier : NSObject

@property (class, readonly, nonatomic) FPThreadedCopier *sharedCopier;

@property (nonatomic) long long numberOfInflightCopies;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *bufferLimitSemaphore;
@property (retain, nonatomic) NSMutableArray *buffers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *writeQueue;

- (id)init;
- (void).cxx_destruct;
- (void)endOperation;
- (void)beginOperation;
- (int)beginReading:(id)a0 error:(id *)a1;
- (int)beginWriting:(id)a0 overwriteDestination:(BOOL)a1 error:(id *)a2;
- (BOOL)copy:(id)a0 to:(id)a1 overwriteDestination:(BOOL)a2 progress:(id)a3 error:(id *)a4;
- (BOOL)finishReading:(int)a0 writing:(int)a1 error:(id *)a2;

@end
