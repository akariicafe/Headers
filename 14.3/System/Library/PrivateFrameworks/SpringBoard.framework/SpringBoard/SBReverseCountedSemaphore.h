@class NSObject;
@protocol OS_dispatch_group;

@interface SBReverseCountedSemaphore : NSObject {
    NSObject<OS_dispatch_group> *_group;
}

- (void)wait;
- (id)init;
- (void).cxx_destruct;
- (void)decrement;
- (void)increment;

@end
