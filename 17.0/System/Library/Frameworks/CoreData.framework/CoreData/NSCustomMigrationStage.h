@class NSManagedObjectModelReference;

@interface NSCustomMigrationStage : NSMigrationStage

@property (readonly) NSManagedObjectModelReference *currentModel;
@property (readonly) NSManagedObjectModelReference *nextModel;
@property (copy) id /* block */ willMigrateHandler;
@property (copy) id /* block */ didMigrateHandler;

- (void)dealloc;
- (id)initWithCurrentModelReference:(id)a0 nextModelReference:(id)a1;

@end
