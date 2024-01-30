@protocol PLBasebandLogChannelDelegate;

@interface PLBasebandLogChannel : NSObject {
    struct __CFMessagePort { } *remotePort;
    struct __CFMessagePort { } *localPort;
}

@property (nonatomic) id<PLBasebandLogChannelDelegate> delegate;
@property (readonly, nonatomic) BOOL isValid;
@property (nonatomic) BOOL cachingEnabled;

- (void)setChannelTimeout:(double)a0;
- (void)commitHardwareLogs;
- (void)setHardwareLoggingLevel:(unsigned long long)a0 withWindowSize:(unsigned long long)a1;
- (void)enableLogCodes:(id)a0 andEvents:(id)a1 andExtraCode:(id)a2;
- (void)connectionInvalidated:(id)a0;
- (BOOL)openWithConnection:(id)a0;
- (void)flush;
- (void)sendObjectOverRemotePort:(id)a0;
- (void)dealloc;
- (void)close;
- (id)init;
- (void)invalidate;

@end
