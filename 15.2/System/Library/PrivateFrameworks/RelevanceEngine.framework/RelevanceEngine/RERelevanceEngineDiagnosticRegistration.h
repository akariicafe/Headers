@interface RERelevanceEngineDiagnosticRegistration : RESingleton {
    BOOL _supportsRegistration;
}

- (id)_init;
- (void)checkinEngine:(id)a0;
- (id)_defaultRegistrationDirectory;
- (id)_processesFileURL;
- (id)_allProcesses;
- (void)_accessEngineDataForProcess:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumerateAvailableEngines:(id /* block */)a0;

@end
