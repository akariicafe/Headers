@interface MLROnDemandPlugin : NSObject

+ (void)performTask:(id)a0 forPluginID:(id)a1 completionHandler:(id /* block */)a2;
+ (id)_createXPCConnection:(id)a0 error:(id *)a1;
+ (id)_locateWithExtensionID:(id)a0;
+ (void)_performTask:(id)a0 forPluginID:(id)a1 isSynchronous:(BOOL)a2 completionHandler:(id /* block */)a3;
+ (id)onDemandPluginIDs;
+ (id)synchronouslyPerformTask:(id)a0 forPluginID:(id)a1 error:(id *)a2;

@end
