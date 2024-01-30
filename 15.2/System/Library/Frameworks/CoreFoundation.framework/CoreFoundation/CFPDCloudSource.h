@class SYDRemotePreferencesSource;

@interface CFPDCloudSource : CFPDContainerSource {
    SYDRemotePreferencesSource *cloudSource;
    struct __CFString { } *_configurationPath;
}

- (struct __CFString { } *)cloudConfigurationPath;
- (void)synchronizeWithCloud:(id)a0 replyHandler:(id /* block */)a1;
- (int)validateMessage:(id)a0 withNewKey:(id)a1 newValue:(id)a2 plistIsAvailableToRead:(BOOL)a3 containerPath:(const char *)a4 fileUID:(unsigned int)a5 mode:(unsigned short)a6 diagnosticMessage:(const char **)a7;
- (id)copyPropertyListValidatingPlist:(BOOL)a0;
- (void)processEndOfMessageIntendingToRemoveSource:(BOOL *)a0;
- (id)initWithDomain:(struct __CFString { } *)a0 userName:(struct __CFString { } *)a1 storeName:(id)a2 configurationPath:(struct __CFString { } *)a3 containerPath:(struct __CFString { } *)a4 shmemIndex:(short)a5 daemon:(id)a6;
- (struct __CFString { } *)debugDump;

@end
