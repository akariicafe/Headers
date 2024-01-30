@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AVOutputContextDestinationChangeInternal : NSObject {
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    long long status;
    NSString *cancellationReason;
}

@end
