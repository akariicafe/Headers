@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface PFVideoExportRangeCoordinator : NSObject

@property struct _NSRange { unsigned long long location; unsigned long long length; } availableRange;
@property (retain) NSMutableArray *waitingCallers;
@property (retain) NSObject<OS_dispatch_queue> *stateQueue;
@property BOOL cancelled;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (BOOL)waitForAvailabilityOfRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 timeout:(unsigned long long)a1 error:(id *)a2;
- (void)updateAvailableRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
