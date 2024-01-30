@class NSObject;
@protocol OS_dispatch_group;

@interface FigNSXPCConnection : NSXPCConnection {
    NSObject<OS_dispatch_group> *_connectionRunningGroup;
}

@property (readonly, nonatomic) BOOL explicitlyInvalidated;

- (void)dealloc;
- (void)blockUntilInvalidateHandlerHasBeenCalled;
- (void)resume;
- (void)setInvalidationHandler:(id /* block */)a0;
- (void)invalidate;

@end
