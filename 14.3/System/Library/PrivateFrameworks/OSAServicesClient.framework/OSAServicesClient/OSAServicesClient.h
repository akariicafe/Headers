@class NSXPCConnection;
@protocol OTAAgentServices;

@interface OSAServicesClient : NSObject {
    NSXPCConnection *_connection;
    id<OTAAgentServices> _synchRemoteObjectProxy;
}

+ (id)sharedClient;

- (unsigned int)uidForUser:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)deletePreference:(id)a0 forUser:(id)a1 inDomain:(id)a2;
- (void)dealloc;
- (id)crashreporterKey;
- (BOOL)setPreference:(id)a0 forUser:(id)a1 inDomain:(id)a2 toValue:(void *)a3;
- (id)awdKey;
- (id)queryKey:(struct __CFString { } *)a0;

@end
