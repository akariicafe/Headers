@protocol _TVRCMROriginDelegate;

@interface _TVRCMROriginWrapper : NSObject {
    void *_origin;
    BOOL _isObserving;
}

@property (weak, nonatomic) id<_TVRCMROriginDelegate> delegate;

- (void).cxx_destruct;
- (void)sendCommand:(unsigned int)a0 options:(id)a1;
- (void)endObservingUpdates;
- (void)dealloc;
- (id)initWithOrigin:(void *)a0;
- (void)startObservingUpdates;
- (BOOL)isEqualToOriginRef:(void *)a0;
- (void)getPickedRouteHasVolumeControl:(id /* block */)a0;
- (void)_supportedCommandsChanged:(id)a0;
- (void)getSupportedCommands:(id /* block */)a0;
- (void)_fetchAndReportSupportedCommands;

@end
