@interface ASTUploadClientFactory : NSObject

+ (id)uploadClientWithASTSession:(id)a0 andFileMap:(id)a1 andUrlFactory:(id)a2 andDelegate:(id)a3;
+ (id)repairToolUploadClientWithASTSession:(id)a0 withUploadRequests:(id)a1 andDelegate:(id)a2;
+ (id)repairToolUploadClientWithUploadRequests:(id)a0 andDelegate:(id)a1;

@end
