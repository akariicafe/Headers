@class NSPersistentHistoryToken;
@protocol STPersistenceControllerProtocol;

@interface STUnique : NSObject {
    NSPersistentHistoryToken *_migratedToken;
}

@property (retain, nonatomic) id<STPersistenceControllerProtocol> persistenceController;

+ (id)localToCloudMapping;
+ (Class)_internalClassForSerializableClassName:(id)a0;
+ (id)cloudToLocalMapping;
+ (id)mirroredEntityNames;

- (void).cxx_destruct;
- (id)historyTokenForAuthor:(id)a0 fromStore:(id)a1;
- (BOOL)addHistoryToken:(id)a0 forAuthor:(id)a1 toMetadataForStore:(id)a2 error:(id *)a3;
- (void)newResolveConflictsBetweenLocalDeltas:(id)a0 cloudDeltas:(id)a1;
- (id)initWithPersistenceController:(id)a0;
- (BOOL)areLocalChangesInterestingWithError:(id *)a0;
- (BOOL)migrateWithError:(id *)a0;
- (void)resolveConflictsBetweenLocalDeltas:(id)a0 cloudDeltas:(id)a1;

@end
