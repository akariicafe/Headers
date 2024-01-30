@class NSMutableData, NEIKEv2EAPProtocol;

@interface NEIKEv2EAP : NSObject {
    struct EAPClientPluginData_s { void *private; BOOL log_enabled; unsigned int log_level; unsigned int mtu; unsigned int generation; void *unique_id; unsigned int unique_id_length; char *username; unsigned int username_length; struct __CFData *encryptedEAPIdentity; char *password; unsigned int password_length; struct __CFDictionary *properties; BOOL system_mode; struct __SecIdentity *sec_identity; void *reserved[6]; } _pluginData;
}

@property (retain) NEIKEv2EAPProtocol *protocol;
@property struct EAPClientModule_s { } *module;
@property (readonly) NSMutableData *sessionKey;

+ (struct EAPClientModule_s { } *)getAKAModule;
+ (struct EAPClientModule_s { } *)getSIMModule;
+ (unsigned int)codeForPayload:(id)a0;
+ (struct EAPClientModule_s { } *)getMSCHAPv2Module;
+ (struct EAPClientModule_s { } *)getGTCModule;
+ (struct EAPClientModule_s { } *)getTLSModule;
+ (struct EAPClientModule_s { } *)getPEAPModule;
+ (unsigned int)typeForPayload:(id)a0;
+ (struct EAPClientModule_s { } *)loadModuleForType:(unsigned int)a0;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)copyProperties:(unsigned int)a0;
- (id)selectModuleForPayload:(id)a0 ikeSA:(id)a1;
- (id)createPayloadResponseForRequest:(id)a0 type:(unsigned int)a1 typeData:(id)a2 typeString:(id)a3;
- (id)createPayloadResponseForRequest:(id)a0 ikeSA:(id)a1 success:(BOOL *)a2 reportEAPError:(BOOL *)a3;

@end
