@class NSString, WFWorkflowRecord;

@interface WFWorkflowConflict : NSObject

@property (copy, nonatomic) NSString *localWorkflowID;
@property (retain, nonatomic) WFWorkflowRecord *localWorkflowRecord;
@property (copy, nonatomic) NSString *remoteWorkflowID;
@property (retain, nonatomic) WFWorkflowRecord *remoteWorkflowRecord;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)resolutionKeepingLocal:(BOOL)a0 keepingRemote:(BOOL)a1;

@end
