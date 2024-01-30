@interface MRProtocolMessageLogger : NSObject

@property (nonatomic) BOOL shouldLog;
@property (nonatomic) BOOL shouldVerboselyLog;

+ (id)sharedLogger;

- (id)init;
- (void)logMessage:(id)a0 client:(id)a1 protocolMessage:(id)a2;

@end
