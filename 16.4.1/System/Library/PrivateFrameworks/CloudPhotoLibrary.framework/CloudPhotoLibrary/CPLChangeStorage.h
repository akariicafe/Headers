@class NSString;

@interface CPLChangeStorage : NSObject

@property (readonly, nonatomic) NSString *storageDescription;

- (BOOL)getRelatedScopedIdentifier:(id *)a0 forRecordWithScopedIdentifier:(id)a1;
- (BOOL)hasChangesWithRelatedScopedIdentifier:(id)a0 class:(Class)a1;
- (id)changesWithRelatedScopedIdentifier:(id)a0 class:(Class)a1;
- (id)changeWithScopedIdentifier:(id)a0;
- (BOOL)getStoredChangeType:(unsigned long long *)a0 forRecordWithScopedIdentifier:(id)a1;

@end
