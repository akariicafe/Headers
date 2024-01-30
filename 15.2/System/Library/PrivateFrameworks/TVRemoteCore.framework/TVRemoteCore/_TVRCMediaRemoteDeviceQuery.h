@protocol _TVRCMediaRemoteDeviceQueryDelegate;

@interface _TVRCMediaRemoteDeviceQuery : NSObject {
    void *_televisionController;
}

@property (weak, nonatomic) id<_TVRCMediaRemoteDeviceQueryDelegate> delegate;

- (void)start;
- (void).cxx_destruct;
- (void)stop;
- (BOOL)_shouldUseMediaRemoteForConnection:(void *)a0;
- (void)_discoveredTelevision:(void *)a0;
- (void)_removedTelevision:(void *)a0;

@end
