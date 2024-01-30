@class NSString;

@interface HDDiagnosticStoreServer : HDStandardTaskServer <HKDiagnosticStoreServer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;

- (id)remoteInterface;
- (id)exportedInterface;
- (void)remote_fetchDiagnosticsWithKeys:(id)a0 completion:(id /* block */)a1;
- (void)remote_fetchSQLPragma:(long long)a0 completion:(id /* block */)a1;
- (void)remote_fetchURLForAnalyticsFileWithName:(id)a0 completion:(id /* block */)a1;

@end
