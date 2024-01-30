@class NSPersistentHistoryToken;
@protocol STPersistenceControllerProtocol;

@interface STUnique : NSObject {
    NSPersistentHistoryToken *_migratedToken;
}

@property (retain, nonatomic) id<STPersistenceControllerProtocol> persistenceController;

+ (id)cloudToLocalMapping;
+ (id)mirroredEntityNames;
+ (id)localToCloudMapping;
+ (Class)_internalClassForSerializableClassName:(id)a0;

- (id)historyTokenForAuthor:(id)a0 fromStore:(id)a1;
- (BOOL)migrateWithExportNeeded:(BOOL *)a0 error:(id *)a1;
- (void)resolveConflictsBetweenLocalDeltas:(id)a0 cloudDeltas:(id)a1;
- (BOOL)addHistoryToken:(id)a0 forAuthor:(id)a1 toMetadataForStore:(id)a2 error:(id *)a3;
- (void)newResolveConflictsBetweenLocalDeltas:(id)a0 cloudDeltas:(id)a1;
- (void).cxx_destruct;
- (BOOL)migrateWithError:(id *)a0;
- (id)initWithPersistenceController:(id)a0;
- (BOOL)areLocalChangesInterestingWithError:(id *)a0;

@end
