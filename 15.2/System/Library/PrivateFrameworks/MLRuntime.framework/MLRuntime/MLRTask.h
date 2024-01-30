@class DESInternalDodMLTask, MLRTaskParameters, MLRTaskAttachments;

@interface MLRTask : NSObject

@property (readonly, nonatomic) DESInternalDodMLTask *DESTask;
@property (readonly, nonatomic) MLRTaskParameters *parameters;
@property (readonly, copy, nonatomic) MLRTaskAttachments *attachments;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDodMLTask:(id)a0;
- (id)initWithParameters:(id)a0 attachments:(id)a1;

@end
