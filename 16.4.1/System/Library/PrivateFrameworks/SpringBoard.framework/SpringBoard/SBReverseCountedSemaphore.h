@class NSObject;
@protocol OS_dispatch_group;

@interface SBReverseCountedSemaphore : NSObject {
    NSObject<OS_dispatch_group> *_group;
}

- (void)decrement;
- (BOOL)waitWithTimeout:(double)a0;
- (id)init;
- (void)increment;
- (void).cxx_destruct;

@end
