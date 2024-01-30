@class AVOutputContextCommunicationChannelInternal;
@protocol AVOutputContextCommunicationChannelImpl;

@interface AVOutputContextCommunicationChannel : NSObject {
    AVOutputContextCommunicationChannelInternal *_ivars;
}

@property (readonly, nonatomic) const struct __CFString { } *commChannelUUID;
@property (readonly, nonatomic) id<AVOutputContextCommunicationChannelImpl> impl;

- (id)init;
- (void)dealloc;
- (void)sendData:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithOutputContextCommunicationChannelImpl:(id)a0;

@end
