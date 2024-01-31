@class NSMigrationStage, NSArray;

@interface NSLightweightMigrationStage : NSMigrationStage

@property (retain) NSMigrationStage *subsequentStage;
@property (readonly) NSArray *versionChecksums;

- (void)dealloc;
- (id)initWithVersionChecksums:(id)a0;

@end
