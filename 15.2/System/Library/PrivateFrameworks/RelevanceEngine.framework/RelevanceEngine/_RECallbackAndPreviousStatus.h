@class NSObject;
@protocol OS_dispatch_queue;

@interface _RECallbackAndPreviousStatus : NSObject

@property (nonatomic) int status;
@property (copy, nonatomic) id /* block */ invalidationCallback;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;

@end
