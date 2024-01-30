@class NSXPCConnection, VCDaemonXPCEventHandler;

@interface WFRunnerPrewarmManager : NSObject

@property (readonly, nonatomic) VCDaemonXPCEventHandler *eventHandler;
@property (retain, nonatomic) NSXPCConnection *runner;

- (void).cxx_destruct;
- (id)initWithXPCEventHandler:(id)a0;
- (void)prewarmRunnerIfNecessary;

@end
