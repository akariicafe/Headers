@class NSString, NSConditionLock;
@protocol RMExtensionStatusPublisherRequestHandling;

@interface RMExtensionStatusPublisher : NSObject <RMExtensionStatusPublisherRequestHandling> {
    NSConditionLock *_requestHandlerLock;
}

@property (class, readonly, nonatomic) RMExtensionStatusPublisher *sharedPublisher;

@property (readonly, nonatomic) id<RMExtensionStatusPublisherRequestHandling> requestHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
