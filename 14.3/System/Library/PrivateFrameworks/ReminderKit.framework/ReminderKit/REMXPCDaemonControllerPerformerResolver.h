@class NSString;

@interface REMXPCDaemonControllerPerformerResolver : NSObject

@property (readonly, nonatomic) NSString *name;

- (void)resolveWithDaemon:(id)a0 reason:(id)a1 completion:(id /* block */)a2;

@end
