@class NSString;

@interface HDDatabaseControlServer : HDStandardTaskServer <HKDatabaseControlServer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;

- (void)remote_getHealthDirectorySizeInBytesWithCompletion:(id /* block */)a0;
- (id)remoteInterface;
- (void)remote_performMigrationWithCompletion:(id /* block */)a0;
- (void)remote_getHealthDatabaseIdentifierWithCompletion:(id /* block */)a0;
- (void)remote_obliterateHealthDataWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)exportedInterface;

@end
