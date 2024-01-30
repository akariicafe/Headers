@class NSString;

@interface HDHealthMedicationsDaemonPlugin : NSObject <HDPlugin, HDDatabaseSchemaProvider, HDTaskServerClassProvider, HDUserDomainConceptEntityProvider, HDSyncEntityProvider, HDOntologySchemaImporterProvider, HDOntologyFeatureEvaluatorProvider, HDDemoDataGeneratorProvider>

@property (readonly, copy, nonatomic) NSString *pluginIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *schemaName;
@property (readonly, copy, nonatomic) NSString *syncSchemaIdentifier;

- (long long)currentSchemaVersionForProtectionClass:(long long)a0;
- (void)registerMigrationStepsForProtectionClass:(long long)a0 migrator:(id)a1;
- (id)databaseEntitiesForProtectionClass:(long long)a0;
- (id)extensionForProfile:(id)a0;
- (id)taskServerClasses;
- (id)orderedSyncEntities;
- (id)extensionForHealthDaemon:(id)a0;
- (id)demoDataGeneratorClasses;
- (id)ontologyFeatureEvaluatorsForDaemon:(id)a0;
- (id)ontologySchemaImporterClasses;
- (id)userDomainConceptEntityClasses;

@end
