@class NSString, AVPublisher;
@protocol AVCancellable;

@interface AVSinkSubscriber : NSObject <AVCancellable> {
    AVPublisher *_publisher;
    id /* block */ _sink;
    id<AVCancellable> _token;
    struct OpaqueFigSimpleMutex { } *_cancelMutex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
