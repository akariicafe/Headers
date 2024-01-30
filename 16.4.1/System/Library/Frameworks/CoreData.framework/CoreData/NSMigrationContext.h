@class NSMutableDictionary, NSPropertyMapping, NSEntityMapping, NSString, NSMigrationManager;

@interface NSMigrationContext : NSObject {
    NSMutableDictionary *_bySourceAssociationTable;
    NSMutableDictionary *_byDestinationAssociationTable;
    NSMutableDictionary *_byMappingBySourceAssociationTable;
    NSMutableDictionary *_byMappingByDestinationAssociationTable;
    NSMigrationManager *_migrationManager;
    NSEntityMapping *_currentMapping;
    unsigned long long _currentStep;
    NSPropertyMapping *_currentPropertyMapping;
    NSString *_destinationConfigurationForCloudKitValidation;
}

- (void)dealloc;
- (id)initWithMigrationManager:(id)a0;

@end
