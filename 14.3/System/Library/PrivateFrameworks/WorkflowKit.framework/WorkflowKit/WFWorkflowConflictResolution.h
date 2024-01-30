@class NSString;

@interface WFWorkflowConflictResolution : NSObject

@property (copy, nonatomic) NSString *localWorkflowID;
@property (copy, nonatomic) NSString *remoteWorkflowID;
@property (nonatomic) BOOL keepLocal;
@property (nonatomic) BOOL keepRemote;

- (void).cxx_destruct;
- (id)description;

@end
