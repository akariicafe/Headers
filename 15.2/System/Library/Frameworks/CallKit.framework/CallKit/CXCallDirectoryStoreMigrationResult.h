@interface CXCallDirectoryStoreMigrationResult : NSObject

@property (nonatomic) long long startingSchemaVersion;
@property (nonatomic) long long endingSchemaVersion;
@property (nonatomic) BOOL requiresExtensionDisablement;
@property (nonatomic) BOOL requiresExtensionSynchronization;

@end
