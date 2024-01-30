@class NSXPCConnection;
@protocol OTATaskingAgent;

@interface OTATaskingAgentClient : NSObject {
    NSXPCConnection *_connection;
    id<OTATaskingAgent> _synchRemoteObjectProxy;
}

+ (id)sharedClient;

- (unsigned int)uidForUser:(id)a0;
- (BOOL)setPreference:(id)a0 forUser:(id)a1 inDomain:(id)a2 toValue:(void *)a3;
- (id)awdKey;
- (void).cxx_destruct;
- (id)init;
- (BOOL)deletePreference:(id)a0 forUser:(id)a1 inDomain:(id)a2;
- (id)crashreporterKey;

@end
