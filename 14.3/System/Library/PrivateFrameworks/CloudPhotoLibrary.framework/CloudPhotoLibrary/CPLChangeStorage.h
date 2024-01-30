@class NSString;

@interface CPLChangeStorage : NSObject

@property (readonly, nonatomic) NSString *storageDescription;

- (id)changeWithScopedIdentifier:(id)a0;
- (BOOL)hasChangesWithRelatedScopedIdentifier:(id)a0 class:(Class)a1;
- (BOOL)getRelatedScopedIdentifier:(id *)a0 forRecordWithScopedIdentifier:(id)a1;
- (BOOL)getStoredChangeType:(unsigned long long *)a0 forRecordWithScopedIdentifier:(id)a1;
- (id)changesWithRelatedScopedIdentifier:(id)a0 class:(Class)a1;

@end
