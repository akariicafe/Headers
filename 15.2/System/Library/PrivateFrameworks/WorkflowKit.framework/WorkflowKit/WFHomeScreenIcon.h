@class NSData, WFWorkflowIcon;

@interface WFHomeScreenIcon : NSObject

@property (readonly, nonatomic) WFWorkflowIcon *workflowIcon;
@property (readonly, nonatomic) NSData *customImageData;

- (void).cxx_destruct;
- (id)initWithWorkflowIcon:(id)a0 customImageData:(id)a1;

@end
