@interface RERelevanceEngineDiagnosticRegistration : RESingleton {
    BOOL _supportsRegistration;
}

- (id)_init;
- (void)_accessEngineDataForProcess:(id)a0 usingBlock:(id /* block */)a1;
- (id)_allProcesses;
- (id)_defaultRegistrationDirectory;
- (id)_processesFileURL;
- (void)checkinEngine:(id)a0;
- (void)enumerateAvailableEngines:(id /* block */)a0;

@end
