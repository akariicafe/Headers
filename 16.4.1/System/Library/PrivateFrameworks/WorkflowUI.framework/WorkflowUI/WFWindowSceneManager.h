@interface WFWindowSceneManager : NSObject

+ (id)userActivityForEditingWorkflow:(id)a0;
+ (void)activateSceneForWorkflowReference:(id)a0 sender:(id)a1;
+ (id)existingSceneSessionForEditingWorkflowReference:(id)a0;
+ (id)mainScene;
+ (void)setupSession:(id)a0 forEditingWorkflow:(id)a1;
+ (id)workflowIdentifierFromUserActivity:(id)a0;

@end
