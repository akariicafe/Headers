@interface WFWindowSceneManager : NSObject

+ (void)activateSceneForWorkflowReference:(id)a0 sender:(id)a1;
+ (void)setupSession:(id)a0 forEditingWorkflow:(id)a1;
+ (id)existingSceneSessionForEditingWorkflowReference:(id)a0;
+ (id)userActivityForEditingWorkflow:(id)a0;
+ (id)workflowIdentifierFromUserActivity:(id)a0;
+ (id)mainScene;

@end
