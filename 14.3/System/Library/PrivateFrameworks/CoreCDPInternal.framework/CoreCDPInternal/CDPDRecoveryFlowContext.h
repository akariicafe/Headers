@class CDPContext;

@interface CDPDRecoveryFlowContext : NSObject

@property (retain, nonatomic) CDPContext *context;
@property (nonatomic) BOOL hasPeersForRemoteApproval;

- (void).cxx_destruct;

@end
