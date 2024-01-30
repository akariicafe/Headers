@class NSXPCConnection;
@protocol OTAAgentServices;

@interface OSAServicesClient : NSObject {
    NSXPCConnection *_connection;
    id<OTAAgentServices> _synchRemoteObjectProxy;
}

+ (id)sharedClient;

- (id)queryKey:(struct __CFString { } *)a0;
- (unsigned int)uidForUser:(id)a0;
- (BOOL)setPreference:(id)a0 forUser:(id)a1 inDomain:(id)a2 toValue:(void *)a3;
- (id)awdKey;
- (void).cxx_destruct;
- (id)init;
- (BOOL)deletePreference:(id)a0 forUser:(id)a1 inDomain:(id)a2;
- (void)dealloc;
- (id)crashreporterKey;

@end
