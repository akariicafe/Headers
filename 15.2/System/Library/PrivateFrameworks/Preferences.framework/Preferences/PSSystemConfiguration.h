@interface PSSystemConfiguration : NSObject {
    struct __SCPreferences { } *_prefs;
}

+ (id)sharedInstance;

- (void)cleanupPrefs;
- (struct __CFString { } *)dataServiceID;
- (struct __CFString { } *)voicemailServiceID;
- (unsigned char)synchronizeForWriting:(BOOL)a0;
- (struct __CFString { } *)getServiceIDForPDPContext:(unsigned int)a0;
- (id)protocolConfiguration:(struct __CFString { } *)a0 serviceID:(struct __CFString { } *)a1;
- (id)interfaceConfigurationValueForKey:(struct __CFString { } *)a0 serviceID:(struct __CFString { } *)a1;
- (void)setInterfaceConfigurationValue:(id)a0 forKey:(struct __CFString { } *)a1 serviceID:(struct __CFString { } *)a2;
- (void)setProtocolConfiguration:(id)a0 protocolType:(struct __CFString { } *)a1 serviceID:(struct __CFString { } *)a2;
- (id)protocolConfigurationValueForKey:(struct __CFString { } *)a0 protocolType:(struct __CFString { } *)a1 serviceID:(struct __CFString { } *)a2;
- (void)setProtocolConfigurationValue:(id)a0 forKey:(struct __CFString { } *)a1 protocolType:(struct __CFString { } *)a2 serviceID:(struct __CFString { } *)a3;
- (void)dealloc;

@end
