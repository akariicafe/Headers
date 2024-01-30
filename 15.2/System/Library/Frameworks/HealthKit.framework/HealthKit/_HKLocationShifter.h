@class NSObject;
@protocol OS_dispatch_queue;

@interface _HKLocationShifter : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

+ (BOOL)isShiftRequiredForLocations:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)shiftLocations:(id)a0 withCompletion:(id /* block */)a1;

@end
