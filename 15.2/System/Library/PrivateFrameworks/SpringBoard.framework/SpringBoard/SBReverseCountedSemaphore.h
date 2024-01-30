@class NSObject;
@protocol OS_dispatch_group;

@interface SBReverseCountedSemaphore : NSObject {
    NSObject<OS_dispatch_group> *_group;
}

- (void)decrement;
- (BOOL)waitWithTimeout:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (void)increment;

@end
