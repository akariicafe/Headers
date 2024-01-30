@class NSManagedObjectModel, NSError, NSEntityMapping;

@interface _NSMappingModelBuilder : NSObject {
    NSManagedObjectModel *_sourceModel;
    NSManagedObjectModel *_destinationModel;
    NSEntityMapping *_currentEntityMapping;
    NSError *_error;
}

+ (int)migrationDebugLevel;
+ (void)setMigrationDebugLevel:(int)a0;

- (void)dealloc;
- (id)initWithSourceModel:(id)a0 destinationModel:(id)a1;

@end
