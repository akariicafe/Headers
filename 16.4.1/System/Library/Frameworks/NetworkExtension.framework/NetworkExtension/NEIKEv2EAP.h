@class NEIKEv2EAPProtocol;

@interface NEIKEv2EAP : NSObject {
    struct EAPClientPluginData_s { void *private; BOOL log_enabled; unsigned int log_level; unsigned int mtu; unsigned int generation; void *unique_id; unsigned int unique_id_length; char *username; unsigned int username_length; struct __CFData *encryptedEAPIdentity; char *password; unsigned int password_length; struct __CFDictionary *properties; BOOL system_mode; struct __SecIdentity *sec_identity; void *reserved[6]; } _pluginData;
    NEIKEv2EAPProtocol *_protocol;
    struct EAPClientModule_s { } *_module;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
