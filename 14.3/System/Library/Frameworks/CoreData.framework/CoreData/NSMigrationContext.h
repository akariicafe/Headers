@class NSString, NSPropertyMapping, NSEntityMapping, NSMutableDictionary, NSMigrationManager;

@interface NSMigrationContext : NSObject {
    NSMutableDictionary *_bySourceAssociationTable;
    NSMutableDictionary *_byDestinationAssociationTable;
    NSMutableDictionary *_byMappingBySourceAssociationTable;
    NSMutableDictionary *_byMappingByDestinationAssociationTable;
    NSMigrationManager *_migrationManager;
    NSEntityMapping *_currentMapping;
    unsigned long long _currentStep;
    NSPropertyMapping *_currentPropertyMapping;
}

@property (retain) NSEntityMapping *currentEntityMapping;
@property (retain) NSPropertyMapping *currentPropertyMapping;
@property unsigned long long currentMigrationStep;
@property (retain) NSString *destinationConfigurationForCloudKitValidation;

- (void)clearAssociationTables;
- (void)_createAssociationsBySource:(id)a0 withDestination:(id)a1 forEntityMapping:(id)a2;
- (id)initWithMigrationManager:(id)a0;
- (void)_createAssociationsByDestination:(id)a0 fromSource:(id)a1 forEntityMapping:(id)a2;
- (id)destinationInstancesForEntityMapping:(id)a0 sourceInstance:(id)a1;
- (id)sourceInstancesForEntityMapping:(id)a0 destinationInstance:(id)a1;
- (void)dealloc;
- (void)associateSourceInstance:(id)a0 withDestinationInstance:(id)a1 forEntityMapping:(id)a2;

@end
