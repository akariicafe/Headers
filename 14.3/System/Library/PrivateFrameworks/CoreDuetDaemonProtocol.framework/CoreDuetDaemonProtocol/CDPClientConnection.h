@class CDDXPCConnection, CDDebug, NSString;

@interface CDPClientConnection : NSObject

@property (readonly) CDDXPCConnection *connection;
@property (readonly) CDDebug *debug;
@property (readonly) NSString *clientName;
@property BOOL admissionOverride;
@property BOOL admissionResult;

- (id)init;
- (void).cxx_destruct;
- (BOOL)sendMessage:(long long)a0 withXPCdictionaryKey:(id)a1 dictionary:(id)a2 admissionId:(id)a3 options:(id)a4 error:(id *)a5 replyHandler:(id /* block */)a6;
- (id)initWithPluginName:(id)a0 error:(id *)a1;
- (BOOL)bootstrapWithError:(id *)a0 replyHandler:(id /* block */)a1;
- (BOOL)triggerWithConditions:(id)a0 error:(id *)a1 replyHandler:(id /* block */)a2;
- (BOOL)admissionSignoffForAttributes:(id)a0 admissionId:(id)a1 options:(id)a2 error:(id *)a3 replyHandler:(id /* block */)a4;
- (BOOL)activitySignal:(id)a0 error:(id *)a1 replyHandler:(id /* block */)a2;
- (BOOL)admissionCheckAndStartedForAttributes:(id)a0 admissionId:(id)a1 options:(id)a2 error:(id *)a3 replyHandler:(id /* block */)a4;

@end
